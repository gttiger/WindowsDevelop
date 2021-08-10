#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QLibrary>
#include <QDebug>
#include "getfreespace.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    qDebug() << "剩余空间 " << "GB";
    /*隐式调用*/
    Getfreespace aa;
    quint64 c = aa.getDiskFreeSpace(QString("C:/"));

    /*显示调用
    QLibrary mylib("Getfreespace");
    mylib.load();
    if(mylib.isLoaded()) {
        qDebug()<<"ok";
    }
    typedef quint64 (*FunDef1)(QString);

    FunDef1 getfreespace = (FunDef1)mylib.resolve("getDiskFreeSpace");
    if (getfreespace) {
        qDebug() << "yes " << QApplication::applicationDirPath()+"/Getfreespace.dll";
        return 0;
    }
    if (getfreespace == nullptr) {
        qDebug() << "fuck " << QApplication::applicationDirPath()+"/Getfreespace.dll";
        quint64 freespace = getfreespace(QString("C:/"));

        qDebug() << "剩余空间 " << freespace;
        return 0;
    }

    quint64 freespace = getfreespace(QString("C:/"));
*/
    qDebug() << "剩余空间 " << c;
    w.show();
    //QStringList driversList = QDir::drives();
    //qDebug()<<driversList.at(0).absoluteDir().absolutePath();

    //quint64 freeSpace = DiskTools::DiskTools().getDiskFreeSpace(QString("C:/"));
    //qDebug() << "剩余空间 " << freespace<< "GB";
    return a.exec();
}
