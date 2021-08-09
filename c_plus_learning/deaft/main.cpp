#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <Windows.h>
using namespace std;
void intToByte(int i,byte *bytes,int size = 4)
{
    memset(bytes,0,sizeof(byte) * size);
    bytes[0] = (byte) (0xff & i);
    bytes[1] = (byte) ((0xff00 & i) >> 8);
    bytes[2] = (byte) ((0xff0000 & i) >> 16);
    bytes[3] = (byte) ((0xff000000 & i) >> 24);
    cout<<bytes[0]<<endl;
    qDebug()<<bytes[0]<<bytes[1]<<bytes[2]<<bytes[3];
    return ;
}

int bytesToInt(byte* bytes,int size = 4)
{
    int addr = bytes[0] & 0xFF;
    addr |= ((bytes[1] << 8) & 0xFF00);
    addr |= ((bytes[2] << 16) & 0xFF0000);
    addr |= ((bytes[3] << 24) & 0xFF000000);
    return addr;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int i = -5;
    QString c = QString::number(i);
    byte* b[4];
    intToByte(4,b[4],4);
    qDebug()<<c.toInt();
    //cout<<c<<endl;
    return a.exec();
}

