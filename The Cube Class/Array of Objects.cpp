#include <iostream>
#include <cstdlib>
#include <ctime>
#include "cube.h"
using namespace std;

//Function to print all object attributes
void printCube(RectangularCube rc)
{
	cout <<
		"L = " << rc.getLength() << ", " <<	//Print length
		"W = " << rc.getWidth() << ", " <<	//Prints width
		"H = " << rc.getHeight() << ", " <<	//Prints height
		"V = " << rc.volume() << ", " <<	//Print volume
		"A = " << rc.surfaceArea() << endl;	//Prints surface area
}

int main()
{
	//Create array of RectangularCube objects
	RectangularCube rcArray[5];

	//Sets rand seed to time
	srand(time(NULL));

	//Loop to assign random attributes
	for (int i = 0; i < 5; i++)
	{
		rcArray[i].setLength(rand() % 10 + 1);	//Sets length
		rcArray[i].setWidth(rand() % 10 + 1);	//Sets width
		rcArray[i].setHeight(rand() % 10 + 1);	//Sets height
	}

	//Loop to print attributes for all array object elements
	for (int i = 0; i < 5; i++)
	{
		printCube(rcArray[i]);
	}
}