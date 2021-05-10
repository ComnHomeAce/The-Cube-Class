#include <iostream>
#include "cube.h"
using namespace std;

int main()
{
	//Create two objects
	RectangularCube rc1;					//No argument constructor
	RectangularCube rc2(7.5, 4.8, 2.7);		//Constructor with parameters

	//Invoke volume and surfaceArea on both objects and display their returned values
	cout << "For rc1: Volume = " << rc1.volume() << ", Surface Area = " << rc1.surfaceArea() << endl;
	cout << "For rc2: Volume = " << rc2.volume() << ", Surface Area = " << rc2.surfaceArea() << endl;

	//Invoke set function and chance value of one side
	rc1.setHeight(14.6);

	//Invoke volume and surfaceArea on modified object and display new returned values
	cout << "For rc1: New Volume = " << rc1.volume() << ", New Surface Area = " << rc1.surfaceArea() << endl;

	//Assign an anonymous RectangularCube object to rc1 
	rc1 = RectangularCube(16.5, 18.9, 16.8);

	//Invoke volume and surfaceArea on modified object and display new returned values
	cout << "For rc1 from anonymous RectangularCube object: Volume = " << rc1.volume() << ", Surface Area = " << rc1.surfaceArea() << endl;
}