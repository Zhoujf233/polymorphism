//
//  main.cpp
//  polymorphism
//
//  Created by JF Zhou on 2019/8/9.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"
#include "Cylinder.hpp"

int main(int argc, const char * argv[])
{
    Cylinder cy1(3.5,6.4,5.2,10);
    cout<<"\noriginal cylinder:\nx = "<<cy1.getX()<<",y = "<<cy1.getY()<<",r = "<<cy1.getRadius()<<",h = "<<cy1.getHeight()<<"\n,area = "<<cy1.area()<<",volume = "<<cy1.volume()<<endl;
    cy1.setHeight(15);
    cy1.setRadius(7.5);
    cy1.setPoint(5,5);
    cout<<"\nnew cylinder:\n"<<cy1;
    Point &pRef = cy1;
    cout<<"\npRef as a Point:"<<pRef;
    Circle &cRef = cy1;
    cout<<"cRef as a Circle:"<<cRef;
    return 0;
}
