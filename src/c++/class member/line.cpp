#include "line.h"

// 先调用列表构造 调用成员的构造函数
line::line(int x1, int y1, int x2, int y2) : m_A(x1, y1), m_B(x2, y2)
{
}

line::~line()
{
}

void line::info()
{
    m_A.print_info();
    m_B.print_info();
}