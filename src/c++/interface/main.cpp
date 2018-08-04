#include "dog.h"

// 通过接口类接收 实现该接口的对象的指针
void interface(Animal *ani);

int main()
{
    //创建实现interface接口的对象
    Dog jum("jum", 3);
    interface(&jum);

    return 0;
}

// 调用接口的方法
void interface(Animal *ani)
{
    ani->aoao();
    ani->running();
}