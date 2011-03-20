#include <QtGui/QApplication>
#include "fusinvform.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList args = QCoreApplication::arguments ();
    if (args.size() < 2) {
        std::cerr<<"Usage: fusinvform title msg"<<std::endl;
        exit(0);
    }
    FusInvForm w;
    w.setTitle(args[1]);
    w.setMsg(args[2]);
    w.show();

    return a.exec();
}
