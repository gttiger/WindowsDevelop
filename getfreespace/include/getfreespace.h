#ifndef GETFREESPACE_H
#define GETFREESPACE_H
#include "QDebug"
#include <windows.h>
#include "getfreespace_global.h"

class GETFREESPACESHARED_EXPORT Getfreespace
{

public:  
    Getfreespace();
    quint64 getDiskFreeSpace(QString driver);
};
//显示调用动态库时需要使用使用
extern "C" GETFREESPACESHARED_EXPORT Q_DECL_EXPORT quint64 getDiskFreeSpace(QString driver); //删除类Dll的对象

#endif // GETFREESPACE_H
