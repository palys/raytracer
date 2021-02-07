#include "Point3D.hpp"

Vector3D Point3D::operator-(const Point3D & p) const {
    return Vector3D(
        this->x - p.x, 
        this->y - p.y,
        this->z - p.z
    );
}

Point3D Point3D::operator+(const Vector3D & v) const {
    return Point3D(
        this->x + v.x,
        this->y + v.y,
        this->z + v.z
    );
}