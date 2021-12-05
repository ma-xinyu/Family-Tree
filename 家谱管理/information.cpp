#include "information.h"
#include "ui_information.h"
#include <QMessageBox>
//#include <string>
//using namespace std;

Information::Information(QWidget *parent) : QDialog(parent),
    ui (new Ui::Information)
{
    ui->setupUi(this);
    connect(ui->btn_save,SIGNAL(clicked()),this,SLOT(returnSignal()));
}

Information::~Information()
{
    delete ui;
}

void Information:: returnSignal()
{

    bool age_ok = true;
    bool height_ok = true;
    ui->ageEdit->text().toInt(&age_ok);
    ui->heightEdit->text().toUInt(&height_ok);
    if((ui->sexEdit->text() != QString("男") && ui->sexEdit->text() != QString("女")) || (ui->ageEdit->text().toInt() < 0) || (age_ok == false) || (height_ok == false)|| (ui->heightEdit->text().toDouble() < 0))
    {
        QMessageBox error;
        error.setText("请输入正确数据！");
        error.setWindowTitle("错误");
        error.exec();
    }
    else emit returnData(ui->nameEdit->text(),ui->sexEdit->text(),ui->birthdayEdit->text(),ui->deathdayEdit->text(),
                    ui->ageEdit->text(),ui->birthplaceEdit->text(),ui->heightEdit->text());

    this->close();
}

/*void Information:: returnData(QString name_r, QString birthday_r, QString sex_r, QString birthplace_r, QString height_r)
{
    name = ui->nameEdit->text();
    birthday = ui->birthdayEdit->text();
    sex = ui->sexEdit->text();
    birthplace = ui->birthplaceEdit->text();
    height = ui->heightEdit->text();

    name_r = name;
    birthday_r = birthday;
    sex_r = sex;
    birthplace_r = birthplace;
    height_r = height;

    this->close();

}*/

