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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *picture;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *Layout2;
    QPushButton *No1;
    QPushButton *No2;
    QPushButton *No3;
    QPushButton *No4;
    QPushButton *No5;
    QWidget *layoutWidget1;
    QHBoxLayout *Layout1;
    QRadioButton *species;
    QRadioButton *life;
    QRadioButton *special;
    QLabel *picture_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(734, 540);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        picture = new QLabel(centralWidget);
        picture->setObjectName(QStringLiteral("picture"));
        picture->setGeometry(QRect(10, 110, 261, 191));
        picture->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(280, 110, 441, 381));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 681, 41));
        Layout2 = new QHBoxLayout(layoutWidget);
        Layout2->setSpacing(6);
        Layout2->setContentsMargins(11, 11, 11, 11);
        Layout2->setObjectName(QStringLiteral("Layout2"));
        Layout2->setContentsMargins(0, 0, 0, 0);
        No1 = new QPushButton(layoutWidget);
        No1->setObjectName(QStringLiteral("No1"));

        Layout2->addWidget(No1);

        No2 = new QPushButton(layoutWidget);
        No2->setObjectName(QStringLiteral("No2"));

        Layout2->addWidget(No2);

        No3 = new QPushButton(layoutWidget);
        No3->setObjectName(QStringLiteral("No3"));

        Layout2->addWidget(No3);

        No4 = new QPushButton(layoutWidget);
        No4->setObjectName(QStringLiteral("No4"));

        Layout2->addWidget(No4);

        No5 = new QPushButton(layoutWidget);
        No5->setObjectName(QStringLiteral("No5"));

        Layout2->addWidget(No5);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 2, 531, 51));
        Layout1 = new QHBoxLayout(layoutWidget1);
        Layout1->setSpacing(6);
        Layout1->setContentsMargins(11, 11, 11, 11);
        Layout1->setObjectName(QStringLiteral("Layout1"));
        Layout1->setContentsMargins(0, 0, 0, 0);
        species = new QRadioButton(layoutWidget1);
        species->setObjectName(QStringLiteral("species"));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(12);
        species->setFont(font);
        species->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        Layout1->addWidget(species);

        life = new QRadioButton(layoutWidget1);
        life->setObjectName(QStringLiteral("life"));
        life->setFont(font);
        life->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        Layout1->addWidget(life);

        special = new QRadioButton(layoutWidget1);
        special->setObjectName(QStringLiteral("special"));
        special->setFont(font);
        special->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        Layout1->addWidget(special);

        picture_2 = new QLabel(centralWidget);
        picture_2->setObjectName(QStringLiteral("picture_2"));
        picture_2->setGeometry(QRect(10, 310, 261, 181));
        picture_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 734, 17));
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
        picture->setText(QString());
        No1->setText(QApplication::translate("MainWindow", "\350\215\267\350\230\255\347\211\233", Q_NULLPTR));
        No2->setText(QApplication::translate("MainWindow", "\347\221\236\345\243\253\351\273\203\347\211\233", Q_NULLPTR));
        No3->setText(QApplication::translate("MainWindow", "\345\237\203\347\210\276\345\244\217\347\211\233", Q_NULLPTR));
        No4->setText(QApplication::translate("MainWindow", "\346\233\264\350\263\275\347\211\233", Q_NULLPTR));
        No5->setText(QApplication::translate("MainWindow", "\345\250\237\345\247\215\347\211\233", Q_NULLPTR));
        species->setText(QApplication::translate("MainWindow", "\344\271\263\347\211\233\345\223\201\347\250\256", Q_NULLPTR));
        life->setText(QApplication::translate("MainWindow", "\344\271\263\347\211\233\347\224\237\346\264\273\345\217\262", Q_NULLPTR));
        special->setText(QApplication::translate("MainWindow", "\347\211\271\346\256\212\345\212\237\350\203\275\351\203\250\344\275\215", Q_NULLPTR));
        picture_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
