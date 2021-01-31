#ifndef __Ray__
#define __Ray__

#include "Point3D.hpp"
#include "Vector3D.hpp"

class Ray {
public:
    Point3D origin;
    Vector3D direction;
    Ray(): origin(), direction() {};
    Ray(const Point3D & origin, const Vector3D & direction): origin(origin), direction(direction) {};
};

#endif
