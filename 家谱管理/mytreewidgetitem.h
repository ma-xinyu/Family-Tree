#ifndef MYTREEWIDGETITEM_H
#define MYTREEWIDGETITEM_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QString>


class MyTreeWidgetItem :public QObject, public QTreeWidgetItem
{
    Q_OBJECT
public:
    explicit MyTreeWidgetItem(QTreeWidget *parent = nullptr);
    MyTreeWidgetItem(QTreeWidgetItem *parent = nullptr);

    QString name;
    QString sex;
    QString birthday;
    QString deathday;
    QString age;
    QString birthplace;
    QString height;
public slots:
    void changeItemInformation(QString , QString , QString , QString , QString , QString , QString );

signals:
    //void signal_isSaved(MyTreeWidgetItem*);

};

#endif // MYTREEWIDGETITEM_H
