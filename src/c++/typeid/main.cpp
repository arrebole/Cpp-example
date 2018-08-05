#include <iostream>
#include "dog.h"

void useType(Animal *ani);

int main()
{
    Dog bobe("bobe", 3);
    Animal *bb = &bobe;
    useType(bb);
    return 0;
}

// 传入父类接口对象
void useType(Animal *ani)
{

    //动态判断类型
    cout << typeid(ani).name() << endl;

    //判断指针指向对象的类型
    //父类转化为子类
    //调用子类的方法
    if (typeid(*ani) == typeid(Dog))
    {
        Dog *a = dynamic_cast<Dog *>(ani);
        a->eat();
    }
}
