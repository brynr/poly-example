#include "triangle.h"

std::string EquilateralTriangle::getShapeName() const {
    return "Equilateral Triangle";
}

double EquilateralTriangle::getPerimeter() const {
    return base*3;
}

double EquilateralTriangle::getArea() const {
    return (sqrt(3)/4)*pow(base,2);
}
