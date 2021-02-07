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
    RGBColor operator+(const RGBColor & c) const;
    RGBColor operator*(const float a) const;
    RGBColor operator/(const float a) const;
    RGBColor operator*(const RGBColor & c) const;
    RGBColor pow(float p) const;
    RGBColor & operator+=(const RGBColor & c);
};

RGBColor operator*(const float a, const RGBColor & c);

#endif