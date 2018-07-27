/********************************************************************************
** Form generated from reading UI file 'sub2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUB2_H
#define UI_SUB2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sub1
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sub1)
    {
        if (Sub1->objectName().isEmpty())
            Sub1->setObjectName(QStringLiteral("Sub1"));
        Sub1->resize(280, 236);
        centralwidget = new QWidget(Sub1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 261, 121));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 51, 16));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 61, 16));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 61, 16));
        doubleSpinBox = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(90, 30, 62, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 140, 93, 28));
        Sub1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sub1);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 280, 26));
        Sub1->setMenuBar(menubar);
        statusbar = new QStatusBar(Sub1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Sub1->setStatusBar(statusbar);

        retranslateUi(Sub1);

        QMetaObject::connectSlotsByName(Sub1);
    } // setupUi

    void retranslateUi(QMainWindow *Sub1)
    {
        Sub1->setWindowTitle(QApplication::translate("Sub1", "MainWindow", nullptr));
        groupBox_3->setTitle(QApplication::translate("Sub1", "Transform", nullptr));
        label->setText(QApplication::translate("Sub1", "Position", nullptr));
        label_2->setText(QApplication::translate("Sub1", "Rotation", nullptr));
        label_3->setText(QApplication::translate("Sub1", "Scale", nullptr));
        pushButton->setText(QApplication::translate("Sub1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sub1: public Ui_Sub1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUB2_H
