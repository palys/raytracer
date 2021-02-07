#ifndef __Sphere__
#define __Sphere__

#include "Hit.hpp"
#include "Ray.hpp"
#include "Point3D.hpp"
#include "GeometricObject.hpp"

class Sphere : public GeometricObject {
    Point3D center;
    double radius;
public:
    Sphere(): center(), radius(0) {};
    Sphere(const Point3D & center, const double radius): center(center), radius(radius) {};
    virtual Hit * hit(const Ray & ray) const;
};

#endif
