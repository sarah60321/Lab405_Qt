#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "QString"

int sum = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Button_drinks->setChecked(true);
    //Category圖片
    QPixmap drinks("drinks.png");
    ui->label_pic_drinks->setPixmap(drinks);
    ui->label_pic_drinks->setPixmap(drinks.scaled(80,80,Qt::KeepAspectRatio));
    QPixmap brunch("brunch.png");
    ui->label_pic_brunch->setPixmap(brunch);
    ui->label_pic_brunch->setPixmap(brunch.scaled(80,80,Qt::KeepAspectRatio));
    QPixmap meals("meals.png");
    ui->label_pic_meals->setPixmap(meals);
    ui->label_pic_meals->setPixmap(meals.scaled(80,80,Qt::KeepAspectRatio));
    //Product圖片
    ui->A_2->setText("咖啡 Coffee $100");
    QPixmap coffee("coffee.png");
    ui->A_image->setPixmap(coffee);
    ui->A_image->setPixmap(coffee.scaled(180,180,Qt::KeepAspectRatio));
    ui->A_image->setAlignment(Qt::AlignCenter);
    ui->B_2->setText("奶茶 Milk Tea $80");
    QPixmap milktea("milktea.png");
    ui->B_image->setPixmap(milktea);
    ui->B_image->setPixmap(milktea.scaled(150,150,Qt::KeepAspectRatio));
    ui->B_image->setAlignment(Qt::AlignCenter);
    ui->C_2->setText("冰沙 Smoothies $120");
    QPixmap smoothies("smoothies.png");
    ui->C_image->setPixmap(smoothies);
    ui->C_image->setPixmap(smoothies.scaled(150,150,Qt::KeepAspectRatio));
    ui->C_image->setAlignment(Qt::AlignCenter);
    ui->D_2->setText("牛奶 Milk $70");
    QPixmap milk("milk.png");
    ui->D_image->setPixmap(milk);
    ui->D_image->setPixmap(milk.scaled(200,200,Qt::KeepAspectRatio));
    ui->D_image->setAlignment(Qt::AlignCenter);

    ui->price->setText("總金額= 0");
    ui->payment->setText("應付= 0");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_drinks_clicked()
{
    ui->A_2->setText("咖啡 Coffee $100");
    QPixmap coffee("coffee.png");
    ui->A_image->setPixmap(coffee);
    ui->A_image->setPixmap(coffee.scaled(180,180,Qt::KeepAspectRatio));
    ui->A_image->setAlignment(Qt::AlignCenter);
    ui->B_2->setText("奶茶 Milk Tea $80");
    QPixmap milktea("milktea.png");
    ui->B_image->setPixmap(milktea);
    ui->B_image->setPixmap(milktea.scaled(150,150,Qt::KeepAspectRatio));
    ui->B_image->setAlignment(Qt::AlignCenter);
    ui->C_2->setText("冰沙 Smoothies $120");
    QPixmap smoothies("smoothies.png");
    ui->C_image->setPixmap(smoothies);
    ui->C_image->setPixmap(smoothies.scaled(150,150,Qt::KeepAspectRatio));
    ui->C_image->setAlignment(Qt::AlignCenter);
    ui->D_2->setText("牛奶 Milk $70");
    QPixmap milk("milk.png");
    ui->D_image->setPixmap(milk);
    ui->D_image->setPixmap(milk.scaled(200,200,Qt::KeepAspectRatio));
    ui->D_image->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_Button_brunch_clicked()
{
    ui->A_2->setText("珍珠鬆餅 $95");
    QPixmap waffle("waffle.png");
    ui->A_image->setPixmap(waffle);
    ui->A_image->setPixmap(waffle.scaled(180,180,Qt::KeepAspectRatio));
    ui->A_image->setAlignment(Qt::AlignCenter);
    ui->B_2->setText("美式豪華早午餐 $125");
    QPixmap American("American.png");
    ui->B_image->setPixmap(American);
    ui->B_image->setPixmap(American.scaled(180,180,Qt::KeepAspectRatio));
    ui->B_image->setAlignment(Qt::AlignCenter);
    ui->C_2->setText("總匯三明治 $110");
    QPixmap sandwich("sandwich.png");
    ui->C_image->setPixmap(sandwich);
    ui->C_image->setPixmap(sandwich.scaled(180,180,Qt::KeepAspectRatio));
    ui->C_image->setAlignment(Qt::AlignCenter);
    ui->D_2->setText("班尼迪克蛋 $115");
    QPixmap benedict("benedict.png");
    ui->D_image->setPixmap(benedict);
    ui->D_image->setPixmap(benedict.scaled(180,180,Qt::KeepAspectRatio));
    ui->D_image->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_Button_meals_clicked()
{
    ui->A_2->setText("烤雞腿排 $180");
    QPixmap chicken("chicken.png");
    ui->A_image->setPixmap(chicken);
    ui->A_image->setPixmap(chicken.scaled(180,180,Qt::KeepAspectRatio));
    ui->A_image->setAlignment(Qt::AlignCenter);
    ui->B_2->setText("香煎魚排 $165");
    QPixmap fish("fish.png");
    ui->B_image->setPixmap(fish);
    ui->B_image->setPixmap(fish.scaled(180,180,Qt::KeepAspectRatio));
    ui->B_image->setAlignment(Qt::AlignCenter);
    ui->C_2->setText("蛋包咖哩飯 $170");
    QPixmap curry("curry.png");
    ui->C_image->setPixmap(curry);
    ui->C_image->setPixmap(curry.scaled(180,180,Qt::KeepAspectRatio));
    ui->C_image->setAlignment(Qt::AlignCenter);
    ui->D_2->setText("番茄肉醬義大利麵 $155");
    QPixmap noodle("noodle.png");
    ui->D_image->setPixmap(noodle);
    ui->D_image->setPixmap(noodle.scaled(200,200,Qt::KeepAspectRatio));
    ui->D_image->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->Button_drinks->isChecked()){
        sum += (ui->NO_A->value())*100;}
    if(ui->Button_brunch->isChecked()){
        sum += (ui->NO_A->value())*95;}
    if(ui->Button_meals->isChecked()){
        sum += (ui->NO_A->value())*180;}
    ui->price->setText("總金額= "+QString::number(sum));
    if(ui->Button_cash->isChecked()){
    on_Button_cash_clicked();}
    if(ui->Button_card->isChecked()){
    on_Button_card_clicked();}
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->Button_drinks->isChecked()){
        sum += (ui->NO_B->value())*80;}
    if(ui->Button_brunch->isChecked()){
        sum += (ui->NO_B->value())*125;}
    if(ui->Button_meals->isChecked()){
        sum += (ui->NO_B->value())*165;}
    ui->price->setText("總金額= "+QString::number(sum));
    if(ui->Button_cash->isChecked()){
    on_Button_cash_clicked();}
    if(ui->Button_card->isChecked()){
    on_Button_card_clicked();}
}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->Button_drinks->isChecked()){
        sum += (ui->NO_C->value())*120;}
    if(ui->Button_brunch->isChecked()){
        sum += (ui->NO_C->value())*110;}
    if(ui->Button_meals->isChecked()){
        sum += (ui->NO_C->value())*170;}
    ui->price->setText("總金額= "+QString::number(sum));
    if(ui->Button_cash->isChecked()){
    on_Button_cash_clicked();}
    if(ui->Button_card->isChecked()){
    on_Button_card_clicked();}
}

void MainWindow::on_pushButton_4_clicked()
{
    if(ui->Button_drinks->isChecked()){
        sum += (ui->NO_D->value())*70;}
    if(ui->Button_brunch->isChecked()){
        sum += (ui->NO_D->value())*115;}
    if(ui->Button_meals->isChecked()){
        sum += (ui->NO_D->value())*155;}
    ui->price->setText("總金額= "+QString::number(sum));
    if(ui->Button_cash->isChecked()){
    on_Button_cash_clicked();}
    if(ui->Button_card->isChecked()){
    on_Button_card_clicked();}
}

void MainWindow::on_Button_cash_clicked()
{
    if (sum!=0){
    int payment = sum;
    payment = payment -30;
    ui->payment->setText("應付= "+QString::number(payment));}
}

void MainWindow::on_Button_card_clicked()
{
    if(sum!=0){
    int payment = sum;
    payment = payment *0.9;
    ui->payment->setText("應付= "+QString::number(payment));}
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::information(this,tr("系統訊息"),tr("餐點訂購完成！"));

}

