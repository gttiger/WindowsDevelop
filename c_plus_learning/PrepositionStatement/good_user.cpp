#include "good_user.h"
#include "lkjdsaf.h"
void sum1(int,int);  // 知识点5：扩大形参类型时，前置声明函数妨碍头文件开发者api
void f(B*) { std::cout << "f(B*)" << std::endl;}
void f(void*) {std::cout << "f(void*)" << std::endl;}
//void test(D* x) { f(x); }  // calls f(B*)
void test1(){sum1(2.1,4);}
good_user::good_user()
{

}

void good_user::test(D *x)
{
    f(x);
    test1();
}

