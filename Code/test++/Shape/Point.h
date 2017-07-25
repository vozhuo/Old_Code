#ifndef POINT_H
#define POINT_H
#include<Shape.h>

class Point : public Shape
{
private:
    int x, y;
public:
    Point(int = 0, int = 0);
    void setPoint(int, int);
    int getX() const { return x; }
    int gety() const { return y; }
    virtual void printShapeName() const { cout << "Point: "; }
    virtual void print() const;
};

#endif // POINT_H
