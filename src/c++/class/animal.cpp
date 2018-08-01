#include "animal.h"
#include <iostream>

// 绑定与声明类函数

// 构造函数                              构造列表
// 构造列表先执行 而且可以给const赋值
animal::chordata::chordata(string _name) : age(1)
{
    name = _name;
}

// 复制函数
animal::chordata::chordata(const animal::chordata &chor)
{
    cout << "i have copyed" << endl;
}

// 析构函数
animal::chordata::~chordata()
{
    cout << "i am death" << endl;
}

// 标准函数
void animal::chordata::aoao()
{
    cout << "my name: " << name << endl;
    cout << "my age: " << age << endl;
}