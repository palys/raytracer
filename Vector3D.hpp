#ifndef __Vector3D__
#define __Vector3D__

#include <iostream>

class Vector3D {
public:
    double x, y, z;
    Vector3D(double x = 0, double y = 0, double z = 0): x(x), y(y), z(z) {}
    Vector3D operator+(Vector3D & v);
    Vector3D operator-(Vector3D & v);
    Vector3D operator*(double a);
    double operator*(Vector3D & v);
    Vector3D operator^(Vector3D & v);
    Vector3D operator/(double a);
    double length();
    double length_sqr();
    Vector3D operator-();
    Vector3D & operator+=(Vector3D & v);
    Vector3D & operator-=(Vector3D & v);
    Vector3D & operator*=(double a);
    Vector3D & operator^=(Vector3D & v);
    Vector3D normal();
};

Vector3D operator*(double a, Vector3D & v);
std::ostream & operator<<(std::ostream & s, const Vector3D & v);

#endif
