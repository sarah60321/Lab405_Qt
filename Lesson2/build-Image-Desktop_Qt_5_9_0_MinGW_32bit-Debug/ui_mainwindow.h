/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *image;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *open;
    QPushButton *origin;
    QPushButton *gray;
    QPushButton *invert;
    QPushButton *blurry;
    QPushButton *save;
    QPushButton *clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(808, 461);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        image = new QLabel(centralWidget);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(170, 10, 611, 401));
        image->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 141, 411));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        open = new QPushButton(layoutWidget);
        open->setObjectName(QStringLiteral("open"));

        verticalLayout->addWidget(open);

        origin = new QPushButton(layoutWidget);
        origin->setObjectName(QStringLiteral("origin"));

        verticalLayout->addWidget(origin);

        gray = new QPushButton(layoutWidget);
        gray->setObjectName(QStringLiteral("gray"));

        verticalLayout->addWidget(gray);

        invert = new QPushButton(layoutWidget);
        invert->setObjectName(QStringLiteral("invert"));

        verticalLayout->addWidget(invert);

        blurry = new QPushButton(layoutWidget);
        blurry->setObjectName(QStringLiteral("blurry"));

        verticalLayout->addWidget(blurry);

        save = new QPushButton(layoutWidget);
        save->setObjectName(QStringLiteral("save"));

        verticalLayout->addWidget(save);

        clear = new QPushButton(layoutWidget);
        clear->setObjectName(QStringLiteral("clear"));

        verticalLayout->addWidget(clear);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 808, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        image->setText(QString());
        open->setText(QApplication::translate("MainWindow", "\351\226\213\345\225\237\345\234\226\346\252\224 Open", Q_NULLPTR));
        origin->setText(QApplication::translate("MainWindow", "\345\216\237\345\234\226 Origin", Q_NULLPTR));
        gray->setText(QApplication::translate("MainWindow", "\347\201\260\351\232\216 Grayscale", Q_NULLPTR));
        invert->setText(QApplication::translate("MainWindow", "\350\262\240\347\211\207 Invert", Q_NULLPTR));
        blurry->setText(QApplication::translate("MainWindow", "\346\250\241\347\263\212 Blurry", Q_NULLPTR));
        save->setText(QApplication::translate("MainWindow", "\345\255\230\346\252\224 Save", Q_NULLPTR));
        clear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244 Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
