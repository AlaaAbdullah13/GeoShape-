#include <iostream>
#include "GeoShape.h"
using namespace std;

int main() {
    Triangle t(10, 5);
    Rect r(4, 6);
    Square s(5);
    Circle c(3);

    cout << "Triangle area = " << t.calcArea() << endl;
    cout << "Rectangle area = " << r.calcArea() << endl;
    cout << "Square area = " << s.calcArea() << endl;
    cout << "Circle area = " << c.calcArea() << endl;

    return 0;
}
