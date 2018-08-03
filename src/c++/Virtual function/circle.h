#ifndef CIR_H
#define CIR_H


#include "shape.h"
class circle : public shape
{
  private:
    double m_dR;

  public:
    circle(double r);
    // 如果需要释放队内存 需要使用 虚析构函数
    ~circle();
    virtual double calcArea();
};

#endif