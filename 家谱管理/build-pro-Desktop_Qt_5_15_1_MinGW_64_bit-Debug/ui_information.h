/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QPushButton *btn_save;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nameEdit;
    QLineEdit *sexEdit;
    QLineEdit *birthdayEdit;
    QLineEdit *deathdayEdit;
    QLineEdit *ageEdit;
    QLineEdit *birthplaceEdit;
    QLineEdit *heightEdit;

    void setupUi(QDialog *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QString::fromUtf8("Information"));
        Information->resize(400, 300);
        btn_save = new QPushButton(Information);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(140, 250, 93, 28));
        frame = new QFrame(Information);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 8, 321, 235));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nameEdit = new QLineEdit(widget_2);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout_2->addWidget(nameEdit);

        sexEdit = new QLineEdit(widget_2);
        sexEdit->setObjectName(QString::fromUtf8("sexEdit"));

        verticalLayout_2->addWidget(sexEdit);

        birthdayEdit = new QLineEdit(widget_2);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));

        verticalLayout_2->addWidget(birthdayEdit);

        deathdayEdit = new QLineEdit(widget_2);
        deathdayEdit->setObjectName(QString::fromUtf8("deathdayEdit"));

        verticalLayout_2->addWidget(deathdayEdit);

        ageEdit = new QLineEdit(widget_2);
        ageEdit->setObjectName(QString::fromUtf8("ageEdit"));

        verticalLayout_2->addWidget(ageEdit);

        birthplaceEdit = new QLineEdit(widget_2);
        birthplaceEdit->setObjectName(QString::fromUtf8("birthplaceEdit"));

        verticalLayout_2->addWidget(birthplaceEdit);

        heightEdit = new QLineEdit(widget_2);
        heightEdit->setObjectName(QString::fromUtf8("heightEdit"));

        verticalLayout_2->addWidget(heightEdit);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QDialog *Information)
    {
        Information->setWindowTitle(QCoreApplication::translate("Information", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        btn_save->setText(QCoreApplication::translate("Information", "\344\277\235\345\255\230", nullptr));
        label_2->setText(QCoreApplication::translate("Information", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Information", "\346\200\247\345\210\253", nullptr));
        label_4->setText(QCoreApplication::translate("Information", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Information", "\346\255\273\344\272\241\346\227\245\346\234\237\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Information", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Information", "\345\207\272\347\224\237\345\234\260\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("Information", "\350\272\253\351\253\230\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
