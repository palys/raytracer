#ifndef __Point3D__
#define __Point3D__

#include "Vector3D.hpp"

class Point3D {
public:
    double x, y, z;
    Point3D(double x = 0, double y = 0, double z = 0): x(x), y(y), z(z) {};
    Vector3D operator-(const Point3D & p) const;
    Point3D operator+(const Vector3D & v) const;
};

#endif
