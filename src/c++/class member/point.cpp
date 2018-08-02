#include "point.h"
#include <iostream>

using namespace std;

// 构造函数
point::point(int x,int y)
{
    m_x =x;
    m_y =y;
}

// 析构函数
point::~point()
{
}

void point::print_info()
{
    cout << m_x <<", "<< m_y <<endl;

}