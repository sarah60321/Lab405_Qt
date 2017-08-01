#include "check.h"
#include "ui_check.h"
#include "mainwindow.h"

check::check(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::check)
{
    ui->setupUi(this);
    ui->price->setText("總金額 = ");
}

check::~check()
{
    delete ui;
}
