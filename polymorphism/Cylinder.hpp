//
//  Cylinder.hpp
//  polymorphism
//
//  Created by JF Zhou on 2019/8/11.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Cylinder_hpp
#define Cylinder_hpp

#include <stdio.h>
#include "Circle.hpp"

class Cylinder:public Circle
{
public:
    Cylinder(float x = 0,float y = 0,float r = 0,float h = 0);
    void setHeight(float);
    float getHeight()const;
    float area()const;
    float volume()const;
    friend ostream& operator <<(ostream&,const Cylinder&);
protected:
    float height;
};

#endif /* Cylinder_hpp */
