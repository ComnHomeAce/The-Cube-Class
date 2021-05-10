#include "cube.h"
using namespace std;

//Implements class RectangularCube for no arguments
RectangularCube::RectangularCube()
{
    length = 6.5;
    width = 4.9;
    height = 2.8;
}

//Implements class RectangularCube with parameters
RectangularCube::RectangularCube(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}

//Implement class RectangularCube functions
void RectangularCube::setLength(double l)   //Sets length
{
    length = l;
}
void RectangularCube::setWidth(double w)    //Sets width
{
    width = w;
}
void RectangularCube::setHeight(double h)   //Sets height
{
    height = h;
}
double RectangularCube::volume()            //Gets volume
{
    return length * width * height;
}
double RectangularCube::surfaceArea()       //Gets surface area
{
    return (2 * length * width) + (2 * length * height) + (2 * width * height);
}