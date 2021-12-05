#ifndef RESULT_H
#define RESULT_H

#include <QDialog>
#include "mytreewidget.h"

namespace Ui {
class Result;
}

class Result : public QDialog
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = nullptr);
    QString num;
    QString average_age;
    QString average_height;
    void showResults(MyTreeWidget*);
    ~Result();

private:
    Ui::Result *ui;
};

#endif // RESULT_H
