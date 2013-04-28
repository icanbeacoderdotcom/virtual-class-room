#include <QApplication>
#include "virtualclassroom.h"

#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VirtualClassRoom w;

    // To Center MainWindow on Screen
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width()- w.width()) / 2;
    int y = (screenGeometry.height()- w.height()) / 2;
    w.move(x,y);
    // End of Center Process

    w.show();
    
    return a.exec();
}
