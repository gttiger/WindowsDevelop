#include "cfile.h"

CFile<int,int>::CFile()
{

}
//template<class T,class T2 = int>
void CFile<int,int>::sum(int m, int n)
{
    int c = m + n;
    std::cout<< c<<std::endl;
}
