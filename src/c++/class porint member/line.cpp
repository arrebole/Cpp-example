#include "line.h"
#include <iostream>

// 先调用列表构造 调用成员的构造函数
line::line(int x1, int y1, int x2, int y2)
{
    m_A = new point(x1,y1);
    m_B = new point(x2,y2);
}

// 析构函数用于清理堆内存
line::~line()
{
    delete m_A;
    m_A = NULL;
    
    delete m_B;
    m_B = NULL;

}

void line::info()
{
    m_A->print_info();
    m_B->print_info();
}