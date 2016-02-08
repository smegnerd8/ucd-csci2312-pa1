
// Drew Smegner 

// Point.cpp

// Created by Drew Smegner (2/1/16)

#include <cmath> 
#include <iostream>
#include "Point.h"

using namespace std;

// Constructors
Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}

// Mutators
void Point::setX(double newX)
{
	x = newX;
}

void Point::setY(double newY)
{
	y = newY;
}

void Point::setZ(double newZ)
{
	z = newZ;
}

// Accessors
double Point::getX() const 
{
	return x;
}

double Point::getY() const
{
	return y;
} 

double Point::getZ() const
{
	return z;
}

// Non member function definition
double Point::distanceTo(const Point &a) const
{
	double side;
	side = sqrt((pow(a.getX() - x, 2) + pow(a.getY() - y, 2) + pow(a.getZ() - z, 2)));
	return side;
}