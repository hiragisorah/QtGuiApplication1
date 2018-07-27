/********************************************************************************
** Form generated from reading UI file 'sub1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUB1_H
#define UI_SUB1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sub2
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sub2)
    {
        if (Sub2->objectName().isEmpty())
            Sub2->setObjectName(QStringLiteral("Sub2"));
        Sub2->resize(241, 528);
        centralwidget = new QWidget(Sub2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 461));
        Sub2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sub2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 241, 26));
        Sub2->setMenuBar(menubar);
        statusbar = new QStatusBar(Sub2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Sub2->setStatusBar(statusbar);

        retranslateUi(Sub2);

        QMetaObject::connectSlotsByName(Sub2);
    } // setupUi

    void retranslateUi(QMainWindow *Sub2)
    {
        Sub2->setWindowTitle(QApplication::translate("Sub2", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("Sub2", "Parts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sub2: public Ui_Sub2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUB1_H
