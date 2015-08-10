#include "triangle.h"
#include "circle.h"

#include <string>
#include <iostream>
#include <vector>

int main(){

    std::vector<Shape*> shapes;

    shapes.push_back(new EquilateralTriangle(2));
    shapes.push_back(new EquilateralTriangle(22));
    shapes.push_back(new EquilateralTriangle(9));
    shapes.push_back(new Circle(11));
    shapes.push_back(new Circle(8));

    for (Shape* s : shapes){
        std::cout << s->toString();
    }

    return 0;

}
