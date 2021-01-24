#ifndef __RGBColor__
#define __RGBColor__

#include<iostream>

class RGBColor {
public:
    float r, g, b;
    RGBColor(float r = 0, float g = 0, float b = 0): r(r), g(g), b(b) {}
    friend std::ostream & operator<<(std::ostream & s, const RGBColor & color) {
        s << "r=" << color.r << " g=" << color.g << " b=" << color.b;
        return s;
    }
};

#endif