#include "circle.h"

const double Circle::PI(M_PI);

std::string Circle::getShapeName() const {
    return "Circle";
}

double Circle::getPerimeter() const {
    return 2*PI*radius;
}

double Circle::getArea() const {
    return pow(radius,2)*PI;
}
