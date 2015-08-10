#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <sstream>

class Shape{

    public:

        virtual std::string toString() const {
            std::stringstream ss;
            ss << "I am a " << getShapeName() << std::endl;
            ss << "My perimeter is " << getPerimeter() << std::endl;
            ss << "My area is " << getArea() << std::endl;
            return ss.str();
        }

        virtual std::string getShapeName() const = 0;

        virtual double getPerimeter() const = 0;

        virtual double getArea() const = 0;

};

#endif
