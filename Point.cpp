#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

void Point::setZ(double newZ)
{
	z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

double Point::getZ()
{
	return z;
}

//Utilities

double Point::distanceTo(Point & target)//finds and returns the distance between the point and one that it is passed
{
	double xDist = pow(abs(target.getX() - x),2); 
	double yDist = pow(abs(target.getY() - y),2);
	double ZDist = pow(abs(target.getZ() - z),2);

	return sqrt(xDist + yDist + ZDist);
}
