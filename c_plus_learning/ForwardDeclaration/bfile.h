#ifndef BFILE_H
#define BFILE_H
#include "iostream"
#include "afile.h"


class BFile
{
public:
    BFile();
    AFile A; //知识点：因为在A对象中要开辟一块属于B的空间，而B中又有A的空间，是一个逻辑错误，无法实现的。
};

#endif // BFILE_H
