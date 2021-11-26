#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // creates the user interface
    ui->setupUi(this);
    ui->pushButton->setText("Close");
}

MainWindow::~MainWindow()
{
    delete ui;
}

