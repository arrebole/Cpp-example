#ifndef RECT_H
#define RECT_H

#include "shape.h"
class rectangle : public shape
{
  private:
    double height;
    double weight;

  public:
    rectangle(double h, double w);
    ~rectangle();
    virtual double calcArea();
};

#endif