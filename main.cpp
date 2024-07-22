#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    w.setFixedSize(300, 300);
    w.show();
    return a.exec();
}
