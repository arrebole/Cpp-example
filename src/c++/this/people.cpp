#include "people.h"

// 构造函数
people::people(string init_name) : name(init_name)
{
    cout << "my name is " << this->name << endl;
}

people::~people()
{
    
}


// 设置名字并返回 该对象
people &people::setName(string name)
{
    this->name = name;
    return *this;
}

string people::getName()
{
    return this->name;
}