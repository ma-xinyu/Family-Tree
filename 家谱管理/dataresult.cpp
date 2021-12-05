#include "dataresult.h"
#include "ui_dataresult.h"
#include <QAction>

Form::Form(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    /*connect(ui->btn_close,&QAction::triggered,[=](){
        this->close();
    });*/
}

Form::~Form()
{
    delete ui;
}
