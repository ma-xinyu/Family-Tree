#ifndef DATARESULT_H
#define DATARESULT_H

#include <QWidget>
#include <QDialog>
#include <QString>
namespace Ui {
class Form;
}

class Form : public QDialog
{
    Q_OBJECT

public:
    explicit Form(QDialog *parent = nullptr);
    QString num;
    QString average_age;
    QString average_height;
    ~Form();

private:
    Ui::Form *ui;
};

#endif // DATARESULT_H
