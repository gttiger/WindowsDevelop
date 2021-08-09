#ifndef AFILE_H
#define AFILE_H

//#include "bfile.h" // 知识点：头文件相互包含
class BFile;
class AFile
{
public:
    AFile();
    BFile *B;  // 知识点：智能使用指针，而不能使用对象
};

#endif // AFILE_H
