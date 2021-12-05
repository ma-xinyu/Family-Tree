#include "mytreewidgetitem.h"


MyTreeWidgetItem::MyTreeWidgetItem(QTreeWidget *parent) : QTreeWidgetItem(parent)
{

}
MyTreeWidgetItem::MyTreeWidgetItem(QTreeWidgetItem *parent) : QTreeWidgetItem(parent)
{

}

void MyTreeWidgetItem::changeItemInformation(QString new_name,QString new_sex, QString new_birthday,QString new_deathday,QString new_age, QString new_birthplace, QString new_height)
{
    name = new_name;
    setText(0,new_name);
    sex = new_sex;
    birthday = new_birthday;
    deathday = new_deathday;
    age = new_age;
    birthplace = new_birthplace;
    height = new_height;
    //setCheckState(0,Qt::Checked);
    //emit signal_isSaved(this);
}
