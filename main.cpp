#include <QApplication>
#include <QDesktopWidget>

#include "mainwindow.h"
#include "interface.h"
#include "controler.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDesktopWidget* deskWidget = a.desktop();
    QRect screenRect  = deskWidget->screenGeometry();
    screen_width = screenRect.width();
    screen_height = screenRect.height();


    MainWindow w;
    w.show();

    return a.exec();
}