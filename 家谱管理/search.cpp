#include "search.h"
#include "ui_search.h"
#include <QDebug>
#include <QMessageBox>

Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    //connect(ui->search_btn,SIGNAL(signal_clicked(QPushButton*),this,SLOT(lbl_show(MyTreeWidgetItem *)));
    connect(ui->close_btn,&QPushButton::clicked,[=](){
        this->close();
    });
    connect(ui->search_btn,SIGNAL(clicked()),this,SLOT(emitSearchName()));
}

/*void Search:: lbl_show(MyTreeWidgetItem *searchItem)
{
    //遍历找人

    qDebug()<<"lbl_show";
    ui->farther_lab->setText(parent->name);
    ui->children_lab->setText(chileren->name);
    ui->lab_name->setText(searchItem->name);
    ui->lab_sex->setText(searchItem->sex);
    ui->lab_birthday->setText(searchItem->birthday);
    ui->lab_deathday->setText(searchItem->deathday);
    ui->lab_age->setText(searchItem->age);
    ui->lab_birthplace->setText(searchItem->birthplace);
    ui->lab_height->setText(searchItem->height);
}*/

void Search::showSearchResults(MyTreeWidgetItem* p)
{
    if( p == NULL)
    {
        QMessageBox error;
        error.setText("未找到此人");
        error.setWindowTitle("错误");
        error.exec();
    }
    else {  ui->lab_name->setText(p->name);
            ui->lab_age->setText(p->age);
            ui->lab_birthday->setText(p->birthday);
            ui->lab_birthplace->setText(p->birthplace);
            ui->lab_deathday->setText(p->deathday);
            ui->lab_height->setText(p->height);
            ui->lab_sex->setText(p->sex);
            MyTreeWidgetItem* parentItem = (MyTreeWidgetItem*)p->QTreeWidgetItem::parent();
            if(parentItem != NULL)
                ui->farther_lab->setText(parentItem->name);
            else ui->farther_lab->setText(QString("无"));
            QString childrenNames=QString("");
            for(int i=0;i<p->childCount();i++)
            {
                MyTreeWidgetItem* child = (MyTreeWidgetItem*)p->child(i);
                QString childName = child->name;
                childrenNames.append(childName);
            }
            if(p->childCount() > 0)ui->children_lab->setText(childrenNames);
            else ui->children_lab->setText(QString("无"));

          }


}

Search::~Search()
{
    delete ui;
}

void Search::emitSearchName()
{
    qDebug()<<"emitSearchName";
    QString name;
    name = ui->searchEdit->text();
    emit signal_emitSearchName(name);
}
