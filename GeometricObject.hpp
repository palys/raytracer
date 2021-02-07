#ifndef __GeometricObject__
#define __GeometricObject__

#include "Hit.hpp"
#include "Ray.hpp"
#include "RGBColor.hpp"

class GeometricObject {
public:
    virtual Hit* hit(const Ray & ray) const = 0;
protected:
    RGBColor color;
};

#endif
