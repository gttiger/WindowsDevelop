#ifndef CFILE_H
#define CFILE_H
#include <iostream>

template <class T,class T2 = int>
class cfile
{
public:
    cfile();
    T x;
    T y;
    void sum(int m, int n);
};

#endif // CFILE_H
