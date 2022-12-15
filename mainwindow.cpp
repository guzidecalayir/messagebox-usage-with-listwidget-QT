#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem("Fenty Lip Gloss");
    ui->listWidget->addItem(item);
    QListWidgetItem *item2 = new QListWidgetItem("Dyson Vacum Cleaner");
    ui->listWidget->addItem(item2);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

    if(ui->listWidget->currentItem()->text() == QString("Fenty Lip Gloss") ){

        QMessageBox::information(this, "Price" , "25$");

    }
    else{

        QMessageBox::information(this, "Price" , "200$");

    }


}

