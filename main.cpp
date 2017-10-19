#include "mainwindow.h"
#include <QApplication>
#include "db_manager.h"

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    DB_Manager();
    MainWindow w;
    w.show();

    return a.exec();
}
