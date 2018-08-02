#include "people.h"

int main(void)
{

    // 栈中创建对象
    people one("hello");
    // 获取名字
    cout << one.getName() << endl;

    // 通过this实现了连续调用；
    cout << one.setName("world").getName() << endl;

    return 0;
}
