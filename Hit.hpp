#ifndef __Hit__
#define __Hit__

#include "Point3D.hpp"
#include "RGBColor.hpp"

class Hit {
public:
    bool hit;
    Point3D hit_point;
    RGBColor color;
    Hit(): hit(false), hit_point(), color() {};
};

#endif
