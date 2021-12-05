#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include <QDialog>
#include <QString>
QT_BEGIN_NAMESPACE
namespace Ui { class Information; }
QT_END_NAMESPACE


class Information : public QDialog
{
    Q_OBJECT
public:
    explicit Information(QWidget *parent = nullptr);

    QString name;
    QString sex;
    QString birthday;
    QString deathday;
    QString age;
    QString birthplace;
    QString height;
    ~Information();
public slots:
    void returnSignal();

signals:
    // void saveButtonIsClicked();
     void returnData(QString , QString , QString , QString , QString , QString , QString );


 private:
     Ui::Information *ui;




 };

 #endif // INFORMATION_H
