#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QImage>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPalette>
#include <QWidget>
#include <QPixmap>
#include <QBitmap>
#include <QRgb>
#include <QColor>
#include <QImage>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_No1_clicked();

    void on_No2_clicked();

    void on_Np3_clicked();

    void on_Species_clicked();

    void on_No3_clicked();

    void on_No4_clicked();

    void on_No5_clicked();

    void on_life_clicked();

    void on_species_clicked();

    void on_special_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
