//#include <iostream>

#include "people.h"
#include "worker.h"

int main()
{
    // 父类虚方法 子类实现方法
    // 通过父类的指针调用子类对象的方法
    People *one;
    Worker xxx("jom");
    one = &xxx;
    one->sayHello();
    one->work();
    one->getName();

    People * hh = new Worker("hh");
    hh->getName();
    hh->sayHello();
    hh->work();


    return 0;
}