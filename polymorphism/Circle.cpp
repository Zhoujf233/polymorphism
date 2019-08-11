//
//  Circle.cpp
//  polymorphism
//
//  Created by JF Zhou on 2019/8/10.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include "Point.hpp"
#include "Circle.hpp"

Circle::Circle(float a,float b,float r):Point(a,b),radius(r){}

void Circle::setRadius(float r){radius = r;}

float Circle::getRadius() const{return radius;}

float Circle::area() const{return 3.14159*radius*radius;}

ostream& operator <<(ostream &output,const Circle &c)
{
    output<<"Center = ["<<c.x<<","<<c.y<<"],r = "<<c.getRadius()<<",area = "<<c.area()<<endl;
    return output;
}

