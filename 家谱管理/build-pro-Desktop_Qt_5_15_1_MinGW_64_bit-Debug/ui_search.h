/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

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

class Ui_Search
{
public:
    QPushButton *search_btn;
    QLabel *label;
    QLineEdit *searchEdit;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *farther_lab;
    QLabel *children_lab;
    QPushButton *close_btn;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lab_name;
    QLabel *lab_sex;
    QLabel *lab_birthday;
    QLabel *lab_deathday;
    QLabel *lab_age;
    QLabel *lab_birthplace;
    QLabel *lab_height;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(571, 382);
        search_btn = new QPushButton(Search);
        search_btn->setObjectName(QString::fromUtf8("search_btn"));
        search_btn->setGeometry(QRect(30, 300, 93, 28));
        label = new QLabel(Search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 45, 131, 31));
        searchEdit = new QLineEdit(Search);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));
        searchEdit->setGeometry(QRect(130, 50, 121, 21));
        frame_2 = new QFrame(Search);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(30, 90, 211, 191));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_3 = new QWidget(frame_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(frame_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        farther_lab = new QLabel(widget_4);
        farther_lab->setObjectName(QString::fromUtf8("farther_lab"));

        verticalLayout_3->addWidget(farther_lab);

        children_lab = new QLabel(widget_4);
        children_lab->setObjectName(QString::fromUtf8("children_lab"));

        verticalLayout_3->addWidget(children_lab);


        horizontalLayout_2->addWidget(widget_4);

        close_btn = new QPushButton(Search);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setGeometry(QRect(140, 300, 93, 28));
        frame = new QFrame(Search);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(280, 10, 271, 351));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);


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


        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "\346\237\245\350\257\242", nullptr));
        search_btn->setText(QCoreApplication::translate("Search", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("Search", "\350\276\223\345\205\245\346\237\245\350\257\242\344\272\272\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Search", "\347\210\266\344\272\262\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Search", "\345\204\277\345\255\220\357\274\232", nullptr));
        farther_lab->setText(QString());
        children_lab->setText(QString());
        close_btn->setText(QCoreApplication::translate("Search", "\345\205\263\351\227\255", nullptr));
        label_4->setText(QCoreApplication::translate("Search", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Search", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Search", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Search", "\346\255\273\344\272\241\346\227\245\346\234\237\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("Search", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("Search", "\345\207\272\347\224\237\345\234\260\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("Search", "\350\272\253\351\253\230\357\274\232", nullptr));
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
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
