#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "shape.h"

#include <math.h>

class EquilateralTriangle : public Shape {

    private:

        double base;

    public:

        EquilateralTriangle(double base):
            base(base){}

        std::string toString() const{
            std::stringstream ss;
            ss << Shape::toString();
            ss << "GOODBYE\n";
            return ss.str();
        }

        std::string getShapeName() const;

        double getPerimeter() const;

        double getArea() const;

};

#endif
