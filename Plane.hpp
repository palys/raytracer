#ifndef __Plane__
#define __Plane__

#include "Hit.hpp"
#include "Ray.hpp"
#include "Point3D.hpp"
#include "Vector3D.hpp"
#include "GeometricObject.hpp"

class Plane : public GeometricObject {
    Point3D point;
    Vector3D normal;
public:
    Plane(): point(), normal() {};
    Plane(const Point3D & p, const Vector3D & n): point(p), normal(n) {};
    virtual Hit * hit(const Ray & ray, double & tmin) const;
};

#endif
