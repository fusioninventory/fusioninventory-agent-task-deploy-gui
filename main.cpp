#include <QtGui/QApplication>
#include "fusinvform.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList args = QCoreApplication::arguments ();
    if (args.size() < 3) {
        std::cerr<<"Usage: fusinvform type title msg"<<std::endl;
        exit(1);
    }
    FusInvForm w;
    w.setType(args[1]);
    w.setTimeout(args[2]);
    w.setTitle(args[3]);
    w.setMsg(args[4]);
    w.show();

    return a.exec();
}
