#include "result.h"
#include "ui_result.h"
#include <QAction>
#include <QString>

Result::Result(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);
    connect(ui->btn_close,&QPushButton::clicked,[=](){
        this->close();
    });
}

void Result::showResults(MyTreeWidget *p)
{
        p->rootData();
        int sum_num = p->num;
        double average_age = p->sum_age / sum_num;
        //QString str_1 = QString::number(average_age,'f',2);     //平均年龄
        double average_height = p->sum_height / sum_num;
        //QString str_2 = QString::number(average_height,'f',2);  //平均身高
        //QString str_3 = QString::number(sum_num,'f',2);         //总人数
        QString str1, str2, str3;
        str1.setNum(sum_num);
        str2.setNum(average_age);
        str3.setNum(average_height);
        ui->N_lab->setText(str1);
        ui->A_lab->setText(str2);
        ui->H_lab->setText(str3);
        p->num = 0;
        p->sum_age = 0;
        p->sum_height = 0;
}

Result::~Result()
{
    delete ui;
}
