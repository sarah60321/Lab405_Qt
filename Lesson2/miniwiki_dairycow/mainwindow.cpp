#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("乳牛百科"));
    ui->species->setChecked(true);
    ui->picture_2->hide();
    ui->species->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;background-color: rgb(225,225,225);");
    ui->life->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;background-color: rgb(225,225,225);");
    ui->special->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;background-color: rgb(225,225,225);");
    ui->No1->setStyleSheet("border:2px groove blue;border-radius:5px;padding:2px 4px;background-color: white;");
    ui->No2->setStyleSheet("border:2px groove blue;border-radius:5px;padding:2px 4px;background-color: white;");
    ui->No3->setStyleSheet("border:2px groove blue;border-radius:5px;padding:2px 4px;background-color: white;");
    ui->No4->setStyleSheet("border:2px groove blue;border-radius:5px;padding:2px 4px;background-color: white;");
    ui->No5->setStyleSheet("border:2px groove blue;border-radius:5px;padding:2px 4px;background-color: white;");
    //this->setStyleSheet("background-image:url(\"background.png\"); background-position:center;");  //包括所有子項目都會有背景，故不使用此code
    this->setAutoFillBackground(true);
    QPixmap background("background.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(background));
    this->setPalette(palette);

    QPixmap pmilk("milk.png");
    //ui->picture->setPixmap(pmilk);  //下面那行同時包括放入圖片&設定圖片大小，故這行可刪除
    ui->picture->setPixmap(pmilk.scaled(250,250,Qt::KeepAspectRatio));
    ui->picture->setAlignment(Qt::AlignCenter);

    QFile fmilk("milk.txt");
    fmilk.open(QIODevice::ReadOnly);
    QTextStream tmilk(&fmilk);
    while(!tmilk.atEnd()){
        QString lmilk = tmilk.readLine();
        ui->textBrowser->append(lmilk);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_No1_clicked()
{
    ui->picture_2->hide();
    if(ui->species->isChecked()){
        QPixmap NO1("NO1.png");
        ui->picture->setPixmap(NO1.scaled(250,250,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile fNO1("NO1.txt");
        fNO1.open(QIODevice::ReadOnly);
        QTextStream tNO1(&fNO1);
        while(!tNO1.atEnd()){
            QString lNO1 = tNO1.readLine();
            ui->textBrowser->append(lNO1);
        }
    }
    if(ui->life->isChecked()){
        QPixmap life("life.jpg");
        ui->picture->setPixmap(life.scaled(250,250,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile flife("life.txt");
        flife.open(QIODevice::ReadOnly);
        QTextStream tlife(&flife);
        while(!tlife.atEnd()){
            QString llife = tlife.readLine();
            ui->textBrowser->append(llife);
        }
    }
    if(ui->special->isChecked()){
        QPixmap stomach("stomach.png");
        ui->picture->setPixmap(stomach.scaled(250,250,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile fstomach("stomach.txt");
        fstomach.open(QIODevice::ReadOnly);
        QTextStream tstomach(&fstomach);
        while(!tstomach.atEnd()){
            QString lstomach = tstomach.readLine();
            ui->textBrowser->append(lstomach);
        }
    }
}

void MainWindow::on_No2_clicked()
{
    ui->picture_2->hide();
    if(ui->species->isChecked()){
        QPixmap NO2("NO2.jpg");
        ui->picture->setPixmap(NO2.scaled(250,250,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile fNO2("NO2.txt");
        fNO2.open(QIODevice::ReadOnly);
        QTextStream tNO2(&fNO2);
        while(!tNO2.atEnd()){
            QString lNO2 = tNO2.readLine();
            ui->textBrowser->append(lNO2);
        }
    }
    if(ui->life->isChecked()){
        QPixmap produce("produce.png");
        ui->picture->setPixmap(produce.scaled(200,200,Qt::KeepAspectRatio));
        ui->picture_2->show();
        QPixmap produce_2("produce_2.png");
        ui->picture_2->setPixmap(produce_2.scaled(250,250,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile fproduce("produce.txt");
        fproduce.open(QIODevice::ReadOnly);
        QTextStream tproduce(&fproduce);
        while(!tproduce.atEnd()){
            QString lproduce = tproduce.readLine();
            ui->textBrowser->append(lproduce);
        }
    }
    if(ui->special->isChecked()){
        QPixmap breast("breast.jpg");
        ui->picture->setPixmap(breast.scaled(200,200,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile fbreast("breast.txt");
        fbreast.open(QIODevice::ReadOnly);
        QTextStream tbreast(&fbreast);
        while(!tbreast.atEnd()){
            QString lbreast = tbreast.readLine();
            ui->textBrowser->append(lbreast);
        }
    }
}

void MainWindow::on_No3_clicked()
{
    ui->picture_2->hide();
    if(ui->species->isChecked()){
        QPixmap NO3("NO3.jpg");
        ui->picture->setPixmap(NO3.scaled(250,250,Qt::KeepAspectRatio));
        ui->textBrowser->clear();
        QFile fNO3("NO3.txt");
        fNO3.open(QIODevice::ReadOnly);
        QTextStream tNO3(&fNO3);
        while(!tNO3.atEnd()){
            QString lNO3 = tNO3.readLine();
            ui->textBrowser->append(lNO3);
        }
    }
    if(ui->life->isChecked()){
        QPixmap purpose("purpose.png");
        ui->picture->setPixmap(purpose.scaled(250,250,Qt::KeepAspectRatio));
        ui->textBrowser->clear();
        QFile fpurpose("purpose.txt");
        fpurpose.open(QIODevice::ReadOnly);
        QTextStream tpurpose(&fpurpose);
        while(!tpurpose.atEnd()){
            QString lpurpose = tpurpose.readLine();
            ui->textBrowser->append(lpurpose);
        }
    }
}
void MainWindow::on_No4_clicked()
{
    if(ui->species->isChecked()){
        QPixmap NO4("NO4.jpg");
        ui->picture->setPixmap(NO4.scaled(250,250,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile fNO4("NO4.txt");
        fNO4.open(QIODevice::ReadOnly);
        QTextStream tNO4(&fNO4);
        while(!tNO4.atEnd()){
            QString lNO4 = tNO4.readLine();
            ui->textBrowser->append(lNO4);
        }
    }
}

void MainWindow::on_No5_clicked()
{
    if(ui->species->isChecked()){
        QPixmap NO5("NO5.jpg");
        ui->picture->setPixmap(NO5.scaled(250,250,Qt::KeepAspectRatio));

        ui->textBrowser->clear();
        QFile fNO5("NO5.txt");
        fNO5.open(QIODevice::ReadOnly);
        QTextStream tNO5(&fNO5);
        while(!tNO5.atEnd()){
            QString lNO5 = tNO5.readLine();
            ui->textBrowser->append(lNO5);
        }
    }
}

void MainWindow::on_species_clicked()
{
    ui->No1->show();
    ui->No2->show();
    ui->No3->show();
    ui->No4->show();
    ui->No5->show();
    ui->picture_2->hide();

    ui->No1->setText("荷蘭牛");
    ui->No2->setText("瑞士黃牛");
    ui->No3->setText("埃爾夏牛");
    ui->No4->setText("更賽牛");
    ui->No5->setText("娟姍牛");
}

void MainWindow::on_life_clicked()
{
    ui->No1->show();
    ui->No2->show();
    ui->No3->show();
    ui->No4->hide();
    ui->No5->hide();
    ui->picture_2->hide();

    ui->No1->setText("生活史");
    ui->No2->setText("乳牛的繁殖");
    ui->No3->setText("利用目的");
}


void MainWindow::on_special_clicked()
{
    ui->No1->show();
    ui->No2->show();
    ui->No3->hide();
    ui->No4->hide();
    ui->No5->hide();
    ui->picture_2->hide();

    ui->No1->setText("胃");
    ui->No2->setText("乳房");
}
