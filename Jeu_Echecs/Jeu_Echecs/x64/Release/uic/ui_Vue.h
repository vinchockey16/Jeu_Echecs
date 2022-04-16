/********************************************************************************
** Form generated from reading UI file 'Vue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUE_H
#define UI_VUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VueClass)
    {
        if (VueClass->objectName().isEmpty())
            VueClass->setObjectName(QString::fromUtf8("VueClass"));
        VueClass->resize(600, 400);
        menuBar = new QMenuBar(VueClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        VueClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VueClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VueClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VueClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        VueClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VueClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VueClass->setStatusBar(statusBar);

        retranslateUi(VueClass);

        QMetaObject::connectSlotsByName(VueClass);
    } // setupUi

    void retranslateUi(QMainWindow *VueClass)
    {
        VueClass->setWindowTitle(QCoreApplication::translate("VueClass", "Vue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VueClass: public Ui_VueClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUE_H
