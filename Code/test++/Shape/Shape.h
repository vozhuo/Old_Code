#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>

class Shape
{
public:
    virtual double area() const { return 0.0; }
    virtual double volume() const { return 0.0; }
    virtual void printShapeName() const = 0;
    virtual void print() const = 0;
};

#endif // SHAPE_H
