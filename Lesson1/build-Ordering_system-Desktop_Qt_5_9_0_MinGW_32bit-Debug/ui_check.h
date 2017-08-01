/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_check
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *price;

    void setupUi(QDialog *check)
    {
        if (check->objectName().isEmpty())
            check->setObjectName(QStringLiteral("check"));
        check->resize(387, 242);
        buttonBox = new QDialogButtonBox(check);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(check);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 101, 31));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(12);
        label->setFont(font);
        price = new QLabel(check);
        price->setObjectName(QStringLiteral("price"));
        price->setGeometry(QRect(110, 70, 111, 61));

        retranslateUi(check);
        QObject::connect(buttonBox, SIGNAL(accepted()), check, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), check, SLOT(reject()));

        QMetaObject::connectSlotsByName(check);
    } // setupUi

    void retranslateUi(QDialog *check)
    {
        check->setWindowTitle(QApplication::translate("check", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("check", "\347\242\272\350\252\215\350\250\202\350\263\274", Q_NULLPTR));
        price->setText(QApplication::translate("check", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class check: public Ui_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
