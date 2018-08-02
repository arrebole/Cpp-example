#include "point.h"

class line
{
  private:
    // 线段包含的两点成员
    point m_A;
    point m_B;

  public:
    // 构造函数传入两点坐标
    line(int x1, int y1, int x2, int y2);
    ~line();

    void info();
};