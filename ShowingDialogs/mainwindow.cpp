#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // setCentralWidget takes up the majority of the space on the screen.
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_Window_triggered()
{
    // set dialog to modal
    //MyDialog mDialog;
    //mDialog.setModal(true);
    //mDialog.exec();

    // to set to non-modal...
    // `this` says that the parent is the QMainWindow for the dialog
    // so when the QMainWindow closes the dialog will also be destroyed
    // automatically so you don't have to do any memory management.
    mDialog  = new MyDialog(this);
    mDialog->show();
}

