/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QPushButton *btn_close;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *N_lab;
    QLabel *A_lab;
    QLabel *H_lab;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *num_lab;
    QLabel *age_lab;
    QLabel *hei_lab;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(282, 238);
        btn_close = new QPushButton(Result);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(90, 190, 93, 28));
        widget_2 = new QWidget(Result);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(120, 20, 131, 151));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        N_lab = new QLabel(widget_2);
        N_lab->setObjectName(QString::fromUtf8("N_lab"));

        verticalLayout_2->addWidget(N_lab);

        A_lab = new QLabel(widget_2);
        A_lab->setObjectName(QString::fromUtf8("A_lab"));

        verticalLayout_2->addWidget(A_lab);

        H_lab = new QLabel(widget_2);
        H_lab->setObjectName(QString::fromUtf8("H_lab"));

        verticalLayout_2->addWidget(H_lab);

        widget = new QWidget(Result);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 97, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        num_lab = new QLabel(widget);
        num_lab->setObjectName(QString::fromUtf8("num_lab"));

        verticalLayout->addWidget(num_lab);

        age_lab = new QLabel(widget);
        age_lab->setObjectName(QString::fromUtf8("age_lab"));

        verticalLayout->addWidget(age_lab);

        hei_lab = new QLabel(widget);
        hei_lab->setObjectName(QString::fromUtf8("hei_lab"));

        verticalLayout->addWidget(hei_lab);


        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QCoreApplication::translate("Result", "\347\273\237\350\256\241\347\273\223\346\236\234", nullptr));
        btn_close->setText(QCoreApplication::translate("Result", "\345\205\263\351\227\255", nullptr));
        N_lab->setText(QString());
        A_lab->setText(QString());
        H_lab->setText(QString());
        num_lab->setText(QCoreApplication::translate("Result", "\346\227\217\350\260\261\344\272\272\346\225\260\357\274\232", nullptr));
        age_lab->setText(QCoreApplication::translate("Result", "\345\271\263\345\235\207\345\271\264\351\276\204\357\274\232", nullptr));
        hei_lab->setText(QCoreApplication::translate("Result", "\345\271\263\345\235\207\350\272\253\351\253\230\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
