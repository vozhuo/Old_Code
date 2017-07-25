#include<Circle.h>

Circle::Circle(double r, int a, int b) :Point(a,b){ setRadius(r); }
void Circle::setRadius(double r) { radius = r > 0 ? r : 0; }
double Circle::getRadius() const { return radius; }
double Circle::area() const { return 3.14159 * radius * radius; }
void Circle::print() const {
    Point::point();
    cout << "; Radius = " << radius;
}
