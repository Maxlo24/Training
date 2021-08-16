#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <iostream>

#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Main()
{
    std::cout<<"Script starting"<<std::endl;
}


void MainWindow::on_pushButton_3_clicked()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"/path/to/file/");
//    ui->listWidget->addItems(fileNames);
    inputFilePath = fileNames[0];
    ui->InputlineEdit->setText(inputFilePath);
}

void MainWindow::on_StartButton_clicked()
{
    Main();
}


void MainWindow::on_FiltercomboBox_activated(int index)
{
    std::cout<<index<<std::endl;
}


void MainWindow::on_OutputName_returnPressed()
{
    std::cout<<ui->OutputName->text().toStdString()<<std::endl;
}

