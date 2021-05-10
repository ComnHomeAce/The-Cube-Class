#ifndef CUBE_H
#define CUBE_H

//Define class RectangularCube
class RectangularCube
{
private:
    //Attributes
    double length;
    double width;
    double height;

public:
    //Constructors
    RectangularCube();
    RectangularCube(double l, double w, double h);

    //Functions
    void setLength(double l);   //Sets length
    void setWidth(double w);    //Sets width
    void setHeight(double h);   //Sets height

    double volume();            //Gets volume
    double surfaceArea();       //Gets surface area

    //Implement class RectangularCube inline functions
    double getLength()  //Gets length
    {
        return length;
    }
    double getWidth()   //Gets width
    {
        return width;
    }
    double getHeight()  //Gets height
    {
        return height;
    }
};
#endif