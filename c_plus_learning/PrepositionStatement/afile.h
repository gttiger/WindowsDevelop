#ifndef AFILE_H
#define AFILE_H
#if 0
#include "bfile.h" // 知识点1：头文件相互包含，(是否)需要编译器编译以下内容
#endif
class BFile;
class AFile
{
public:
    AFile();
private:
BFile *b;
};

#endif // AFILE_H
