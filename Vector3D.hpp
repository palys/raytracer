#ifndef __Vector3D__
#define __Vector3D__

#include <iostream>

class Vector3D {
public:
    double x, y, z;
    Vector3D(double x = 0, double y = 0, double z = 0): x(x), y(y), z(z) {}
    Vector3D operator+(const Vector3D & v) const;
    Vector3D operator-(const Vector3D & v) const;
    Vector3D operator*(const double a) const;
    double operator*(const Vector3D & v) const;
    Vector3D operator^(const Vector3D & v) const;
    Vector3D operator/(const double a) const;
    double length() const;
    double length_sqr() const;
    Vector3D operator-() const;
    Vector3D & operator+=(const Vector3D & v);
    Vector3D & operator-=(const Vector3D & v);
    Vector3D & operator*=(const double a);
    Vector3D & operator^=(const Vector3D & v);
    Vector3D normal() const;
};

Vector3D operator*(const double a, const Vector3D & v);
std::ostream & operator<<(std::ostream & s, const Vector3D & v);

#endif
