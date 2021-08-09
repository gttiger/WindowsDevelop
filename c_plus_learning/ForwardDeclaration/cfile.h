#ifndef CFILE_H
#define CFILE_H
#include <iostream>
template <class T,class T2 = int>
class CFile
{
public:
    CFile();
    void sum(T m, T2 n);
};

#endif // CFILE_H
