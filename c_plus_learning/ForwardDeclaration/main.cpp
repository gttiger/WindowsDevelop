// Copyright 2021 getaotao
/*定义：前置声明是类，函数和模板的纯粹声明，没伴随着其定义
 * 。代码中用到了哪些 symbols
 * , 往往可以用其前置声明来代替对应的 #includes*/


/*知识点1：解决头文件相互包含的问题，使用*/

/*知识点2：当我们在类A使用类B的前置声明时，
 * 我们修改类B时，只需要重新编译类B，而不需
 * 要重新编译a.h的（当然，在真正使用类B时，必须包含b.h） */

/*知识点3：前置声明模板会妨碍头文件开发者变动其API
* ，例如扩大形参类型，加个自带默认参数的模板形参等*/

// 知识点4：前置声明来自命名空间std:: 的symbol时，其行为未定义

// 知识点5：扩大形参类型时，前置声明函数妨碍头文件开发者api

// 知识点6：前置声明代替include暗自改代码的问题


#include <QCoreApplication>
#include "cfile.h"
#include "bfile.h"
#include "gooduser.h"
#include "struct.h"
#include <list>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    CFile<int,int> m;
    m.sum(3,4);
    //class list;  // 知识点4：前置声明来自命名空间std:: 的symbol时，其行为未定义
    using namespace std;

    //CFile<int,int> *m;
    list<int> l;
    list<int>::iterator iter;
    l.push_back(1);
    l.push_back(2);
    for(iter = l.begin() ; iter != l.end() ; iter++)
    {
         cout<<*iter<<" ";
    }
    GoodUser user;
    D *x = new D();
    user.test(x);
    return a.exec();
}
