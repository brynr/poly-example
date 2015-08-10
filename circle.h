#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "shape.h"
#include "math.h"

class Circle : public Shape {

    private:

        static const double PI;

        double radius;

    public:

        Circle(double radius):
            radius(radius){}

        std::string toString() const {
            std::stringstream ss;
            ss << Shape::toString();
            ss << "HELLO!\n";
            return ss.str();
        }

        std::string getShapeName() const;

        double getPerimeter() const;

        double getArea() const;

};

#endif
