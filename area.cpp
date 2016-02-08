// Drew Smegner

// area.cpp

// Created by Drew Smegner (2/3/16)


#include <cmath>
#include <iostream>
#include "Point.h" // header to innclude 

using namespace std;


double computeArea(const Point &a, const Point &b, const Point &c)
{
	double area;
	double s;
	double side1, side2, side3;
	side1 = a.distanceTo(b); // calculating the distance for the 3 sides fo the 3d triangle and storing them 
	side2 = b.distanceTo(c);
	side3 = c.distanceTo(a);

	// Heron's formula
	s = ((side1 + side2 + side3) / 2);
	area = sqrt(s*(s - side1) * (s - side2) * (s - side3));
	return area; // returns area from Heron's formula 
}