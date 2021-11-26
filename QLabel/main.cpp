#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Qwidgets are HTML aware
    // HTML encoding bold and italic
    QLabel *label = new QLabel("<b>hello </b><font color=red><i>"
                               "world from Qt</i></font>");

    QFont f("Arial", 20, QFont::Bold);
    label->setFont(f);
    label->setWordWrap(true);
    label->setMargin(30); // sets surrounding label margin
    label->show();

    return app.exec();
}
