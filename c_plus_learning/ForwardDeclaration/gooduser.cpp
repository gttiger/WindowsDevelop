#include "gooduser.h"
#include "iostream"
#include "function1.h"
void sum1(int,int);  // 知识点5：扩大形参类型时，前置声明函数妨碍头文件开发者api

void f(B*) { std::cout << "f(B*)" << std::endl;}
void f(void*) {std::cout << "f(void*)" << std::endl;}

void test1(){sum1(2.1,4);}
GoodUser::GoodUser()
{

}
void GoodUser::test(D *x)
{
    f(x);
    test1();
}
