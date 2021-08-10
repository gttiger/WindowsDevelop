#ifndef GETFREESPACE_GLOBAL_H
#define GETFREESPACE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GETFREESPACE_LIBRARY)
#  define GETFREESPACESHARED_EXPORT Q_DECL_EXPORT
#else
#  define GETFREESPACESHARED_EXPORT Q_DECL_IMPORT
#endif

//显示调用动态库时需要使用使用
//extern "C"{
//    quint64 GETFREESPACESHARED_EXPORT  getDiskFreeSpace(QString drive); //删除类Dll的对象
//}

#endif // GETFREESPACE_GLOBAL_H
