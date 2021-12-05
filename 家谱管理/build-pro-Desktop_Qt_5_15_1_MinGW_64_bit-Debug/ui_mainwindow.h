/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mytreewidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionsave;
    QWidget *centralwidget;
    MyTreeWidget *treeWidget;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lab_name;
    QLabel *lab_sex;
    QLabel *lab_birthday;
    QLabel *lab_deathday;
    QLabel *lab_age;
    QLabel *lab_birthplace;
    QLabel *lab_height;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(857, 606);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        treeWidget = new MyTreeWidget(centralwidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 20, 551, 511));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(580, 10, 261, 161));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 540, 81, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(720, 540, 81, 28));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(580, 180, 261, 351));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
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

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

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
        lab_name = new QLabel(widget_2);
        lab_name->setObjectName(QString::fromUtf8("lab_name"));

        verticalLayout_2->addWidget(lab_name);

        lab_sex = new QLabel(widget_2);
        lab_sex->setObjectName(QString::fromUtf8("lab_sex"));
        lab_sex->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(lab_sex);

        lab_birthday = new QLabel(widget_2);
        lab_birthday->setObjectName(QString::fromUtf8("lab_birthday"));
        lab_birthday->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(lab_birthday);

        lab_deathday = new QLabel(widget_2);
        lab_deathday->setObjectName(QString::fromUtf8("lab_deathday"));
        lab_deathday->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(lab_deathday);

        lab_age = new QLabel(widget_2);
        lab_age->setObjectName(QString::fromUtf8("lab_age"));
        lab_age->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(lab_age);

        lab_birthplace = new QLabel(widget_2);
        lab_birthplace->setObjectName(QString::fromUtf8("lab_birthplace"));
        lab_birthplace->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(lab_birthplace);

        lab_height = new QLabel(widget_2);
        lab_height->setObjectName(QString::fromUtf8("lab_height"));
        lab_height->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(lab_height);


        horizontalLayout->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\256\266\350\260\261\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "     \346\254\242\350\277\216\344\275\277\347\224\250\346\234\254\345\256\266\350\260\261\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\346\225\260\346\215\256", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\255\273\344\272\241\346\227\245\346\234\237\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\345\234\260\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\350\272\253\351\253\230\357\274\232", nullptr));
        lab_name->setText(QString());
        lab_sex->setText(QString());
        lab_birthday->setText(QString());
        lab_deathday->setText(QString());
        lab_age->setText(QString());
        lab_birthplace->setText(QString());
        lab_height->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
