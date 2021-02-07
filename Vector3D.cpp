#include "Vector3D.hpp"
#include <math.h>

Vector3D Vector3D::operator+(const Vector3D & v) const {
    return Vector3D(this->x + v.x, this->y + v.y, this->z + v.z);
}

Vector3D Vector3D::operator-(const Vector3D & v) const {
    return Vector3D(this->x - v.x, this->y - v.y, this->z - v.z);
}

Vector3D Vector3D::operator*(const double a) const {
    return Vector3D(this->x * a, this->y * a, this->z * a);
}

double Vector3D::operator*(const Vector3D & v) const {
    return this->x * v.x + this->y * v.y + this->z * v.z;
}

Vector3D Vector3D::operator^(const Vector3D & v) const {
    return Vector3D(
        this->y * v.z - this->z * v.y,
        this->z * v.x - this->x * v.z,
        this->x * v.y - this->y * v.x
    );
}

Vector3D Vector3D::operator/(const double a) const {
    return Vector3D(this->x / a, this->y / a, this->z / a);
}

double Vector3D::length() const {
    return sqrt(this->length_sqr());
}

double Vector3D::length_sqr() const {
    return 
        this->x * this->x +
        this->y * this->y +
        this->z * this->z;
}

Vector3D Vector3D::operator-() const {
    return Vector3D(-this->x, -this->y, -this->z);
}

Vector3D & Vector3D::operator+=(const Vector3D & v) {
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
    return *this;
}

Vector3D & Vector3D::operator-=(const Vector3D & v) {
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
    return *this;
}

Vector3D & Vector3D::operator*=(const double a) {
    this->x *= a;
    this->y *= a;
    this->z *= a;
    return *this;
}

Vector3D & Vector3D::operator^=(const Vector3D & v) {
    Vector3D x = (*this) ^ v;
    this->x = x.x;
    this->y = x.y;
    this->z = x.z;
    return *this;
}

Vector3D Vector3D::normal() const {
    double len = this->length();
    return *this / len;
}

Vector3D operator*(const double a, const Vector3D & v) {
    return Vector3D(v.x * a, v.y * a, v.z * a);
}

std::ostream & operator<<(std::ostream & s, const Vector3D & v) {
    s << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return s;
}
