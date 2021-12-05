#include "mytreewidget.h"
#include <QAction>
#include <QPoint>
#include <QMenu>
#include <QUuid>
#include <QDebug>
#include <QInputDialog>
#include "mytreewidgetitem.h"
#include "information.h"
#include <QFile>
#include <string>
#include <QTextStream>

using namespace std;

MyTreeWidget::MyTreeWidget(QWidget *parent) : QTreeWidget(parent)
{
    addRootNodeAction = new QAction("&新建祖先", this);
    deleteAllNodesAction = new QAction("&删除关系", this);

    addCategoryAction = new QAction("&添加子代", this);
//    addTemplateAction = new QAction("&addTemplate", this);

    deleteNodeAction = new QAction("&删除", this);
    reNameNodeAction = new QAction("&重命名", this);
    changeInforAction = new QAction("&修改信息",this);

    connect(addRootNodeAction,SIGNAL(triggered()),this,SLOT(addRootNode()));
    connect(deleteAllNodesAction,SIGNAL(triggered()),this,SLOT(deleteAllNodes()));

    connect(addCategoryAction,SIGNAL(triggered()),this,SLOT(addCategory()));
//    connect(addTemplateAction,SIGNAL(triggered()),this,SLOT(addTemplate()));

    connect(deleteNodeAction,SIGNAL(triggered()),this,SLOT(deleteNode()));
    connect(reNameNodeAction,SIGNAL(triggered()),this,SLOT(reNameNode()));
    connect(changeInforAction,SIGNAL(triggered()),this,SLOT(changeInfor()));


    this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(on_treeWidget_customContextMenuRequested(QPoint)));
    connect(this,SIGNAL(itemClicked(QTreeWidgetItem*,int)),this,SLOT(clicked(QTreeWidgetItem* ,int)));



}

/*void MyTreeWidget::saveAllData()
{
    QFile os("test.dat");
    os.open(QIODevice::ReadWrite);
    MyTreeWidgetItem* p = (MyTreeWidgetItem*)topLevelItem(0);
    //os.write(p->name.toStdString().data());
    QTextStream out(&os);
    QString a;
    a = out.readLine();
    qDebug()<<a;
    out.seek(0);
    a = out.readLine();
    qDebug()<<a;

}*/

void MyTreeWidget::clicked(QTreeWidgetItem* p,int n)
{
    qDebug()<<"itemclicked";
    MyTreeWidgetItem* q =(MyTreeWidgetItem*) p;
    emit signal_clicked(q);
}
/*
void MyTreeWidget::emitSignalInforIsSaved(MyTreeWidgetItem* p)
{
    emit signal_inforSavedItem(p);
}
*/
void MyTreeWidget::on_treeWidget_customContextMenuRequested(const QPoint &pos)
{
    curItem=this->itemAt(pos);  //获取当前被点击的节点

    //在空白位置点击，弹出菜单：添加根节点，删除所有模板。
    if(curItem == NULL)
    {
        QMenu *popMenu =new QMenu(this);//定义一个右键弹出菜单
        popMenu->addAction(addRootNodeAction);
        popMenu->addAction(deleteAllNodesAction);
        popMenu->exec(QCursor::pos());
    }
    else{
        QVariant var = curItem->data(0,Qt::UserRole);
        qDebug() << var.toString();
        //读取表，对isCategory字段进行判断
        if(1)   //选中目录
        {
            qDebug() << "category";
            QMenu *popMenu =new QMenu(this);//定义一个右键弹出菜单
            popMenu->addAction(addCategoryAction);
//            popMenu->addAction(addTemplateAction);
            popMenu->addAction(deleteNodeAction);
            popMenu->addAction(reNameNodeAction);
            popMenu->addAction(changeInforAction);
            popMenu->exec(QCursor::pos());

        }
        else     //选中模板
        {
            qDebug() << "template";
            QMenu *popMenu =new QMenu(this);//定义一个右键弹出菜单
            popMenu->addAction(deleteNodeAction);
            popMenu->addAction(reNameNodeAction);
            popMenu->exec(QCursor::pos());
        }
    }
}

void MyTreeWidget::reNameNode()
{
    qDebug() << "reNameNode";

    QInputDialog dia(this);
    dia.setWindowTitle("重命名");
    dia.setLabelText("请输入姓名：");
    dia.setInputMode(QInputDialog::TextInput);//可选参数：DoubleInput  TextInput

    if(dia.exec() == QInputDialog::Accepted)
    {
       qDebug() << dia.textValue();
       curItem->setText(0,dia.textValue());
       MyTreeWidgetItem* p = (MyTreeWidgetItem*)curItem;
       p->name = dia.textValue();

       //更新数据库
       //curTtem->data   dia.textValue()
    }
}

void MyTreeWidget::deleteNode()
{
    qDebug() << "deleteNode";
    //curItem->data()

    QTreeWidgetItem* parent = curItem->parent();
    if(parent == NULL)
    {
        //得到索引
        int index = 0;
        int count = this->topLevelItemCount();
        for(int i = 0;i<count;i++)
        {
            //QTreeWidget
            //ui->treeWidget->TopLevelItem()
            QTreeWidgetItem* temp = this->topLevelItem(i);
            if(curItem->data(0,Qt::UserRole).toString() == temp->data(0,Qt::UserRole).toString())
            {
                index = i;
            }
        }
        this->takeTopLevelItem(index);
    }
    else
        parent->removeChild(curItem);

}

void MyTreeWidget::addCategory()  // 添加子代
{
    qDebug() << "addCategory";
    //在TEMPLATE表中新加一行
    //新节点ID     根       模板名称  颜色值     是否目录
    //随机UUID  当前UUID   title   colors       1
    //curItem->data()  当前UUID

    MyTreeWidgetItem *temp=new MyTreeWidgetItem(curItem);

    QInputDialog dia(this);
    dia.setWindowTitle("添加子代");
    dia.setLabelText("请输入姓名：");
    dia.setInputMode(QInputDialog::TextInput);//可选参数：DoubleInput  TextInput

    if(dia.exec() == QInputDialog::Accepted)
    {
       qDebug() << dia.textValue();
       temp->setText(0,dia.textValue());
       temp->name = dia.textValue();
       //emit itemClicked(temp,0);

       QVariant var;
       QString str = QUuid::createUuid().toString();
       var.setValue(str);
       temp->setData(0,Qt::UserRole,var);

    }
}

void MyTreeWidget::deleteAllNodes()
{
    qDebug() << "deleteAllNodes";
    this->clear();
    //清空数据库表
}

void MyTreeWidget::addRootNode() //添加祖先
{
    qDebug() << "addRootNode";
    //在TEMPLATE表中新加一行
    //新节点ID   根   模板名称  颜色值    是否目录
    //随机UUID  -1   title   colors     1
    MyTreeWidgetItem *temp=new MyTreeWidgetItem(this);

    QInputDialog dia(this);
    dia.setWindowTitle("新建祖先");
    dia.setLabelText("请输入姓名：");
    dia.setInputMode(QInputDialog::TextInput);//可选参数：DoubleInput  TextInput

    if(dia.exec() == QInputDialog::Accepted)
    {
       qDebug() << dia.textValue();
       temp->setText(0,dia.textValue());
       temp->name = dia.textValue();
       qDebug() <<"名字是"<<temp->name;

       QVariant var;
       QString str = QUuid::createUuid().toString();
       var.setValue(str);
       temp->setData(0,Qt::UserRole,var);
    }
}


void MyTreeWidget::changeInfor()
{
    qDebug()<<"changeInfor";
    MyTreeWidgetItem *temp=(MyTreeWidgetItem *)curItem;

    Information dia_infor(this);
    Information* dia_p = & dia_infor;
    connect(dia_p,SIGNAL(returnData(QString , QString , QString, QString , QString , QString, QString)),
            temp,SLOT(changeItemInformation(QString , QString , QString ,QString, QString, QString,QString)));

    dia_infor.setWindowTitle("修改信息");
    //connect(dia_p,SIGNAL(saveButtonIsClicked()),)
    dia_infor.exec();
    emit signal_inforSavedItem(temp);
}

MyTreeWidgetItem* MyTreeWidget::searchName(QString name)
{
    MyTreeWidgetItem* p;
    int count;
    count = topLevelItemCount();
    for(int i=0;i<count;i++)  //依次访问所有根节点
    {
        p = (MyTreeWidgetItem*)topLevelItem(i);
        if(p->name == name)  //若该结点为目标结点，则返回该结点
            return p;
        else
            p=searchName_p(p, name); //否则递归调用

        if(p != NULL) return p; //若递归后在此根节点下得到了目标结点，返回该结点；否则访问下一个根节点
    }
    return NULL;  //全部访问结束返回NULL
}

MyTreeWidgetItem* MyTreeWidget::searchName_p(QTreeWidgetItem * p, QString name)
{
    if(p == NULL)
        return NULL;
    else
    {
        int count = p->childCount();  //获取当前结点的子代个数
        MyTreeWidgetItem* p_child;
        MyTreeWidgetItem* p_result = NULL;
        for(int i=0;i<count;i++)     //依次访问各个子代
        {
            //MyTreeWidgetItem* p_child = (MyTreeWidgetItem*)p->child(i);
            p_child = (MyTreeWidgetItem*)p->child(i);
            if(p_child->name == name)  //若找到所需结点，就返回该结点
                return  p_child;
            else p_result = searchName_p(p_child,name); //否则递归调用
        }
    return p_result;  //返回结果
    }
}

void MyTreeWidget:: rootData()
{
    MyTreeWidgetItem* p;
        int count;                      //顶层节点数
        count = topLevelItemCount();
        for(int i = 0; i < count; i ++)
        {
            p = (MyTreeWidgetItem*)topLevelItem(i);//第i个顶层节点
            num += 1;
            sum_age += p->age.toInt();
            sum_height += p->height.toInt();
            childrenData(p);                 //把子节点加进来了
        }
        qDebug()<<"num = "<<num;
        qDebug()<<"sum_age = "<<sum_age;
        qDebug()<<"sum_height = "<<sum_height;
}

void MyTreeWidget:: childrenData(MyTreeWidgetItem *p)
{
    int count = p->childCount();    //p父节点的子代个数
        MyTreeWidgetItem * p_child;
        for (int i = 0; i < count; i++)//循环对子节点i进行数据统计
        {
            p_child = (MyTreeWidgetItem *)p->child(i);
            num += 1;
            sum_age += p_child->age.toDouble();
            sum_height += p_child->height.toDouble();
            childrenData(p_child);       //子代的子代进行数据统计
        }
}
