#include "point.h"
#include <iostream>
point::point(int xh,int yh)
{
    x=xh,
    y=yh;
}
point::point()
{
    x=0;
    y=0;
}
point::point(point&o)
{
    x=o.x;
    y=o.y;
}
void point::print(){
    std::cout<< "(" << x <<","<< y << ")" << std::endl;
}
void point::offset(int nx,int ny)
{
x=x+ nx;
y=y+ny;
}


