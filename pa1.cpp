//
// Created by Scott Lee 
//

#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

double computeArea(Point &p1,Point& p2,Point& p3)//computes the area of a triangle based on 3 points it is passed
{
	double sideA = p1.distanceTo(p2);
	double sideB = p2.distanceTo(p3);
	double sideC = p1.distanceTo(p3);
	double semiPerimeter = .5*(sideA + sideB + sideC);

	return sqrt(semiPerimeter*(semiPerimeter - sideA)*(semiPerimeter - sideB)*(semiPerimeter - sideC));
}

int main(void) {//currently set up as a tester function for the computeArea function and the Point class
	double inX, inY, inZ;

	cout << "Please enter X then Y then Z for the first point" << endl;
	cin >> inX >> inY >> inZ;
	Point p1(inX,inY,inZ);
	cout << "Please enter X then Y then Z for the second point" << endl;
	cin >> inX >> inY >> inZ;
	Point p2(inX, inY, inZ);
	cout << "Please enter X then Y then Z for the second point" << endl;
	cin >> inX >> inY >> inZ;
	Point p3(inX, inY, inZ);
	cout << "The area of the triangle is: " << computeArea(p1, p2, p3) << endl;

    return 0;
}
