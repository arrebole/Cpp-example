#include "animal.h"
#include <iostream>

using namespace animal;

int main(void)
{
    // 在栈中实例化

    // 创建一只狗
    chordata dog("dog");
    // 复制实例化的狗
    chordata dog2 = dog;
    // 调用对象方法
    dog.aoao();
    dog2.aoao();

    // 在堆中实例化

    // 创建一只猫
    chordata *cat = new chordata("cat");
    // 调用对象方法
    cat->aoao();

    //销毁堆中数据
    delete cat;
    cat = NULL;

    cout << "programe end " << endl;

    // 创建对象数组
    chordata dogs[3];
    dogs[0].aoao();

    chordata *cats = new chordata[3];
    cat->aoao();
    delete[] cats;
    cats = NULL;
}
