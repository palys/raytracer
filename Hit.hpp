#ifndef __Hit__
#define __Hit__

#include "Point3D.hpp"
#include "RGBColor.hpp"

class Hit {
public:
    bool hit;
    Point3D hit_point;
    RGBColor color;
    double t;
    Hit(): hit(false), hit_point(), color(), t(0) {};
    Hit(const Point3D hit_point, const RGBColor color, const double t): hit(true), hit_point(hit_point), color(color), t(t) {};
};

#endif
