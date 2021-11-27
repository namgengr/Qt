#include "mainwindow.h"

#include <QApplication>
#include <QtGui>
#include <QtCore>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("Name:");
    QLineEdit *txtName= new QLineEdit;

    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName2= new QLineEdit;

    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName, 0, 1);

    layout->addWidget(label2, 1, 0);
    layout->addWidget(txtName2, 1, 1);

    QPushButton *button = new QPushButton("OK");

    // span 1 row and 2 columns
    layout->addWidget(button, 2, 0, 1, 2);

    window->setLayout(layout);

    window->show();
    return a.exec();
}
