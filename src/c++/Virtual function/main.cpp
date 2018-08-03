#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include "shape.h"

using namespace std;

int main()
{

    shape *cir = new circle(6.2);
    shape *rect = new rectangle(2.4, 6.3);

    cout << "圆的面积: " << cir->calcArea() << endl;
    cout << "矩形的面积: " << rect->calcArea() << endl;

    delete cir;
    delete rect;

    cir = NULL;
    rect = NULL;

    return 0;
}
