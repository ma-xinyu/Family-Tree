#ifndef MYTREEWIDGET_H
#define MYTREEWIDGET_H

#include <QWidget>
#include <QTreeWidget>
#include <QPoint>
#include <QString>
#include "mytreewidgetitem.h"
//#include "mylabel.h"

class MyTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    explicit MyTreeWidget(QWidget *parent = nullptr);

     QTreeWidgetItem* curItem;//当前被右击的item

     MyTreeWidgetItem* searchName(QString);
     void average(int&, int&, int&);
     MyTreeWidgetItem* searchName_p(QTreeWidgetItem*, QString);

     int num = 0;
     double sum_age = 0;
     double sum_height = 0;

     void rootData();
     void childrenData(MyTreeWidgetItem * p);



private slots:
        void on_treeWidget_customContextMenuRequested(const QPoint &pos);
        void addRootNode();
        void deleteAllNodes();
        void addCategory();
//        void addTemplate();
        void changeInfor();
        void deleteNode();
        void reNameNode();
//       void dataSave();
//        void display(QTreeWidgetItem* , int);
        void clicked(QTreeWidgetItem* ,int);
//        void saveAllData();
//        void emitSignalInforIsSaved(MyTreeWidgetItem*);

private:

    //空白地方点击
    QAction *addRootNodeAction;
    QAction *deleteAllNodesAction;

    //节点上点击
    QAction *addCategoryAction;
//    QAction *addTemplateAction;
    QAction *deleteNodeAction;
    QAction *reNameNodeAction;
    QAction *changeInforAction;


signals:

    void signal_clicked(MyTreeWidgetItem*);
    void signal_inforSavedItem(MyTreeWidgetItem*);

};

#endif // MYTREEWIDGET_H
