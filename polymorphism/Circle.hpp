//
//  Circle.hpp
//  polymorphism
//
//  Created by JF Zhou on 2019/8/10.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Point.hpp"

class Circle:public Point
{
public:
    Circle(float x = 0,float y = 0,float r = 0);
    void setRadius(float);
    float getRadius() const;
    float area() const;
    friend ostream& operator <<(ostream &,const Circle &);
protected:
    float radius;
};

#endif /* Circle_hpp */
