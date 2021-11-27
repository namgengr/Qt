#include <QApplication>
#include <QPushButton>
#include <QGridLayout>

int main(int argc, char *argv[])
{
    // creates the application loop
    QApplication app(argc, argv);

    // create widget
    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout(window);
    window->setLayout(layout);

    // create six buttons
    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");
    QPushButton *button4 = new QPushButton("four");
    QPushButton *button5 = new QPushButton("five");
    QPushButton *button6 = new QPushButton("six");

    layout->addWidget(button1,0,0);
    layout->addWidget(button2,1,0);
    layout->addWidget(button3,2,0);

    layout->addWidget(button4,3,0);
    layout->addWidget(button5,3,1);
    layout->addWidget(button6,3,3);

    window->show();
    return app.exec();
}
