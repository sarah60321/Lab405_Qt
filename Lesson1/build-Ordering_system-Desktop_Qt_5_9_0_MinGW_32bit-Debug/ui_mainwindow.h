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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Ordering;
    QGroupBox *Category;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *Button_drinks;
    QRadioButton *Button_brunch;
    QRadioButton *Button_meals;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_pic_drinks;
    QLabel *label_pic_brunch;
    QLabel *label_pic_meals;
    QGroupBox *Products;
    QGroupBox *A;
    QLabel *A_image;
    QSpinBox *NO_A;
    QLabel *A_2;
    QPushButton *pushButton;
    QGroupBox *B;
    QLabel *B_image;
    QSpinBox *NO_B;
    QLabel *B_2;
    QPushButton *pushButton_2;
    QGroupBox *C;
    QLabel *C_image;
    QSpinBox *NO_C;
    QLabel *C_2;
    QPushButton *pushButton_3;
    QGroupBox *D;
    QLabel *D_image;
    QSpinBox *NO_D;
    QLabel *D_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *price;
    QLabel *payment;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *Button_cash;
    QRadioButton *Button_card;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(875, 668);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Ordering = new QLabel(centralWidget);
        Ordering->setObjectName(QStringLiteral("Ordering"));
        Ordering->setGeometry(QRect(10, 0, 471, 61));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        Ordering->setFont(font);
        Category = new QGroupBox(centralWidget);
        Category->setObjectName(QStringLiteral("Category"));
        Category->setGeometry(QRect(20, 60, 231, 321));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        Category->setFont(font1);
        layoutWidget = new QWidget(Category);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 0, 121, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Button_drinks = new QRadioButton(layoutWidget);
        Button_drinks->setObjectName(QStringLiteral("Button_drinks"));

        verticalLayout->addWidget(Button_drinks);

        Button_brunch = new QRadioButton(layoutWidget);
        Button_brunch->setObjectName(QStringLiteral("Button_brunch"));

        verticalLayout->addWidget(Button_brunch);

        Button_meals = new QRadioButton(layoutWidget);
        Button_meals->setObjectName(QStringLiteral("Button_meals"));

        verticalLayout->addWidget(Button_meals);

        layoutWidget1 = new QWidget(Category);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 91, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_pic_drinks = new QLabel(layoutWidget1);
        label_pic_drinks->setObjectName(QStringLiteral("label_pic_drinks"));
        label_pic_drinks->setPixmap(QPixmap(QString::fromUtf8("drinks.png")));

        verticalLayout_2->addWidget(label_pic_drinks);

        label_pic_brunch = new QLabel(layoutWidget1);
        label_pic_brunch->setObjectName(QStringLiteral("label_pic_brunch"));
        label_pic_brunch->setPixmap(QPixmap(QString::fromUtf8("brunch.png")));

        verticalLayout_2->addWidget(label_pic_brunch);

        label_pic_meals = new QLabel(layoutWidget1);
        label_pic_meals->setObjectName(QStringLiteral("label_pic_meals"));
        label_pic_meals->setPixmap(QPixmap(QString::fromUtf8("meals.png")));

        verticalLayout_2->addWidget(label_pic_meals);

        Products = new QGroupBox(centralWidget);
        Products->setObjectName(QStringLiteral("Products"));
        Products->setGeometry(QRect(260, 60, 591, 511));
        Products->setFont(font1);
        A = new QGroupBox(Products);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(20, 30, 271, 221));
        QFont font2;
        font2.setPointSize(12);
        A->setFont(font2);
        A_image = new QLabel(A);
        A_image->setObjectName(QStringLiteral("A_image"));
        A_image->setGeometry(QRect(10, 40, 251, 141));
        NO_A = new QSpinBox(A);
        NO_A->setObjectName(QStringLiteral("NO_A"));
        NO_A->setGeometry(QRect(60, 190, 61, 22));
        QFont font3;
        font3.setPointSize(10);
        NO_A->setFont(font3);
        A_2 = new QLabel(A);
        A_2->setObjectName(QStringLiteral("A_2"));
        A_2->setGeometry(QRect(0, 0, 271, 31));
        pushButton = new QPushButton(A);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 190, 91, 31));
        pushButton->setFont(font3);
        B = new QGroupBox(Products);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(300, 30, 271, 221));
        B->setFont(font2);
        B_image = new QLabel(B);
        B_image->setObjectName(QStringLiteral("B_image"));
        B_image->setGeometry(QRect(10, 40, 251, 141));
        NO_B = new QSpinBox(B);
        NO_B->setObjectName(QStringLiteral("NO_B"));
        NO_B->setGeometry(QRect(60, 190, 61, 22));
        NO_B->setFont(font3);
        B_2 = new QLabel(B);
        B_2->setObjectName(QStringLiteral("B_2"));
        B_2->setGeometry(QRect(0, 0, 271, 31));
        pushButton_2 = new QPushButton(B);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 190, 91, 31));
        pushButton_2->setFont(font3);
        C = new QGroupBox(Products);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(20, 270, 271, 221));
        C->setFont(font2);
        C_image = new QLabel(C);
        C_image->setObjectName(QStringLiteral("C_image"));
        C_image->setGeometry(QRect(10, 40, 251, 141));
        NO_C = new QSpinBox(C);
        NO_C->setObjectName(QStringLiteral("NO_C"));
        NO_C->setGeometry(QRect(60, 190, 61, 22));
        NO_C->setFont(font3);
        C_2 = new QLabel(C);
        C_2->setObjectName(QStringLiteral("C_2"));
        C_2->setGeometry(QRect(0, 0, 271, 31));
        pushButton_3 = new QPushButton(C);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 190, 91, 31));
        pushButton_3->setFont(font3);
        D = new QGroupBox(Products);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(300, 270, 271, 221));
        D->setFont(font2);
        D_image = new QLabel(D);
        D_image->setObjectName(QStringLiteral("D_image"));
        D_image->setGeometry(QRect(10, 40, 251, 141));
        NO_D = new QSpinBox(D);
        NO_D->setObjectName(QStringLiteral("NO_D"));
        NO_D->setGeometry(QRect(60, 190, 61, 22));
        NO_D->setFont(font3);
        D_2 = new QLabel(D);
        D_2->setObjectName(QStringLiteral("D_2"));
        D_2->setGeometry(QRect(0, 0, 271, 31));
        pushButton_4 = new QPushButton(D);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 190, 91, 31));
        pushButton_4->setFont(font3);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(730, 580, 121, 31));
        price = new QLabel(centralWidget);
        price->setObjectName(QStringLiteral("price"));
        price->setGeometry(QRect(60, 500, 161, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("AcadEref"));
        font4.setPointSize(12);
        price->setFont(font4);
        payment = new QLabel(centralWidget);
        payment->setObjectName(QStringLiteral("payment"));
        payment->setGeometry(QRect(60, 540, 161, 41));
        payment->setFont(font4);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 420, 191, 61));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Button_cash = new QRadioButton(widget);
        Button_cash->setObjectName(QStringLiteral("Button_cash"));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(10);
        Button_cash->setFont(font5);

        verticalLayout_3->addWidget(Button_cash);

        Button_card = new QRadioButton(widget);
        Button_card->setObjectName(QStringLiteral("Button_card"));
        Button_card->setFont(font5);

        verticalLayout_3->addWidget(Button_card);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 17));
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
        Ordering->setText(QApplication::translate("MainWindow", "Ordering System", Q_NULLPTR));
        Category->setTitle(QApplication::translate("MainWindow", "Category", Q_NULLPTR));
        Button_drinks->setText(QApplication::translate("MainWindow", "Drinks", Q_NULLPTR));
        Button_brunch->setText(QApplication::translate("MainWindow", "Brunch", Q_NULLPTR));
        Button_meals->setText(QApplication::translate("MainWindow", "Meals", Q_NULLPTR));
        label_pic_drinks->setText(QString());
        label_pic_brunch->setText(QString());
        label_pic_meals->setText(QString());
        Products->setTitle(QApplication::translate("MainWindow", "Products", Q_NULLPTR));
        A->setTitle(QString());
        A_image->setText(QString());
        A_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\242\272\350\252\215\350\250\202\350\263\274", Q_NULLPTR));
        B->setTitle(QString());
        B_image->setText(QString());
        B_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\347\242\272\350\252\215\350\250\202\350\263\274", Q_NULLPTR));
        C->setTitle(QString());
        C_image->setText(QString());
        C_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\242\272\350\252\215\350\250\202\350\263\274", Q_NULLPTR));
        D->setTitle(QString());
        D_image->setText(QString());
        D_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\347\242\272\350\252\215\350\250\202\350\263\274", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\256\214\346\210\220\350\250\202\350\263\274", Q_NULLPTR));
        price->setText(QString());
        payment->setText(QString());
        Button_cash->setText(QApplication::translate("MainWindow", "\347\217\276\351\207\221 Cash $30 off", Q_NULLPTR));
        Button_card->setText(QApplication::translate("MainWindow", "\345\210\267\345\215\241 Card 10% off", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
