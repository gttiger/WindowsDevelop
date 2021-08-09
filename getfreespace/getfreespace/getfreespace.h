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

#endif // GETFREESPACE_H
