#include <QCoreApplication>
#include "struct.h"
#include <good_user.h>
#include <cfile.h> /*知识点3加个自带默认参数的模板形参，前置声明会妨碍这个改动，include则不会*/
#include <iostream>


#include <list>


//using namespace std;
//template<class T> class cfile;

//class cfile;
//void sum(int x, int y);
/*知识点2：前置声明模板会妨碍头文件开发者变动其API
 * ，例如扩大形参类型，加个自带默认参数的模板形参等*/
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //class list;  // 知识点4：前置声明来自命名空间std:: 的symbol时，其行为未定义
    using namespace std;

    cfile<int,int> *m;
    list<int> l;
    list<int>::iterator iter;
    l.push_back(1);
    l.push_back(2);
    for(iter = l.begin() ; iter != l.end() ; iter++)
    {
         cout<<*iter<<" ";
    }
    //Y<int> * y;
    m->sum(3,4);
    std::cout<< "hello, world" <<std::endl;
    good_user user;
    D *x = new D();
    user.test(x);

    return a.exec();
}


//class Z
//{
//  //actual definition of the template
//};
//template<class X> //vers 1.1, changed the default from int to Z
//class Y
//{};
//////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;

//// Forward declaration
//#if 1
//class A; /*知识点1：前置声明的作用*/
//#endif
//class B;
//#if 0
//class B:public A { /*知识点2：前置声明的类无法用来继承，继承需要了解类的内部结构*/
//#endif
//class B {
//    int x;

//public:
//    void getdata(int n)
//    {
//        x = n;
//    }
//    friend int sum(A, B);
//};

//class A {
//    int y;

//public:
//    void getdata(int m)
//    {
//        y = m;
//    }
//    friend int sum(A, B);
//};
//int sum(A m, B n)
//{
//    int result;
//    result = m.y + n.x;
//    return result;
//}

//int main()
//{
//    B b;
//    A a;
//    a.getdata(5);
//    b.getdata(4);
//    cout << "The sum is : " << sum(a, b);
//    return 0;
//}
///////////////////////////////////////////
//#include <iostream>

//#include <string>

//using namespace std;

//template <class T1,class T2=char>
//class Pair;
///*构造函数初始化*/
//template <class T1,class T2>
//class Pair
//{
//public:
//    T1 key; //关键字
//    T2 value; //值
//    Pair(T1 k,T2 v):key(k),value(v) { }
//    bool operator < (const Pair<T1,T2> & p) const;
//};

//template<class T1,class T2>

//bool Pair<T1,T2>::operator < (const Pair<T1,T2> & p) const
////Pair的成员函数 operator <
//{ //"小"的意思就是关键字小
//    return key < p.key;
//}

//int main()
//{
//    Pair<string,int> student("Tom",19); //实例化出一个类 Pair<string,int>
//    cout << student.key << " " << student.value;
//    return 0;
//}

