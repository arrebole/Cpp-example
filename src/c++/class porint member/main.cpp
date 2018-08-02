#include "line.h"
#include <iostream>

using namespace std;

int main()
{
    //创造一条线段
    // 1、通过line的构造函数传入 
    // 2、通过line的构造列表函数将参数传给成员的构造函数
    line *xy = new line(1, 2, 3, 4);
    xy->info();

    delete xy;
    xy = NULL;
}