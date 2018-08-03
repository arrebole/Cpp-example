#include "rectangle.h"

rectangle::rectangle(double h, double w) : height(h), weight(w)
{
}

rectangle::~rectangle()
{
}

double rectangle::calcArea()
{
    return height * weight;
}
