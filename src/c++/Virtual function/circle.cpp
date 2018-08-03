#include "circle.h"

circle::circle(double r) : m_dR(r)
{
    
}

circle::~circle()
{
}

double circle::calcArea()
{
    return m_dR * m_dR * 3.14;
}