#include "mainwindow.h"
#include "mytreewidget.h"
#include "ui_mainwindow.h"
#include "mytreewidgetitem.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->treeWidget,SIGNAL(signal_clicked(MyTreeWidgetItem* )),this,SLOT(lbl_show(MyTreeWidgetItem *)));
    connect(ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(condButtonPressed()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(condButtonPressed2()));
    connect(ui->treeWidget,SIGNAL(signal_inforSavedItem(MyTreeWidgetItem*)),this,SLOT(lbl_show(MyTreeWidgetItem*)));
    connect(ui->actionsave,SIGNAL(triggered()),ui->treeWidget,SLOT(saveAllData()));
}

void MainWindow::condButtonPressed()
{
    result = new Result(this) ;//将类指针实例化
    result->showResults(ui->treeWidget);
    result->show();
}

void MainWindow::condButtonPressed2()
{
    QString name;
    search = new Search(this) ;//将类指针实例化
    Search* p = search;
    connect(p,SIGNAL(signal_emitSearchName(QString)),this,SLOT(emitSearchResults(QString)));
    connect(this,SIGNAL(signal_emitSearchResults(MyTreeWidgetItem*)),p,SLOT(showSearchResults(MyTreeWidgetItem*)));
    search->exec();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::emitSearchResults(QString name)
{
    MyTreeWidgetItem* p;
    p = ui->treeWidget->searchName(name);
    emit signal_emitSearchResults(p);
}

void MainWindow:: lbl_show(MyTreeWidgetItem *clickedItem)
{
    qDebug()<<"lbl_show";
    ui->lab_name->setText(clickedItem->name);
    ui->lab_sex->setText(clickedItem->sex);
    ui->lab_birthday->setText(clickedItem->birthday);
    ui->lab_deathday->setText(clickedItem->deathday);
    ui->lab_age->setText(clickedItem->age);
    ui->lab_birthplace->setText(clickedItem->birthplace);
    ui->lab_height->setText(clickedItem->height);
}


    /*遍历treeWidget
    //QTreeWidget *treeWidget;
    QTreeWidgetItemIterator it(ui.treeWidget);
    while (*it) {
         //do something like
         (*it)->text(0);
        ++it;
    }*/
/*
void MainWindow::average(MyTreeWidget *treeWidget)
{
    QTreeWidgetItemIterator it(ui->treeWidget);
    int sum_num = 0;
    int sum_age = 0;
    int sum_height = 0;
    while (*it) {
        MyTreeWidgetItem item = (*it);
        sum_num += 1;
        sum_age += int((*it)->age);      //取每个节点的年龄数据
        sum_height += int(Item->height);
         (*it)->text(0);
        ++it;
    }
    int average_age = sum_age / sum_num;
    QString str_1 = QString::number(average_age,'f',2);
    int average_height = sum_height / sum_num;
    QString str_2 = QString::number(average_height,'f',2);

    //返回值
}

*/

