// A 3-dimensional point class!
// Coordinates are double-precision floating point.

// Drew Smegner 

 #ifndef __POINT_H
 #define __POINT_H

#include <cmath>


class Point {    
private:
    double x, y, z;

public:
    // Constructors
     Point();                      // default constructor now taking 3 arguments 
    Point(double X, double Y, double Z);    // three-agrument constructor

    // Mutator methods to set values 
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);


    // Non memeber funcitons for distance function 
    double distanceTo(const Point &a)const;


    // Accessor methods to get values 
    double getX()const;
    double getY()const;
    double getZ()const;
    
};

#endif // __POINT_H



