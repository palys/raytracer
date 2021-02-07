#include "RGBColor.hpp"
#include <cmath>

RGBColor RGBColor::operator+(const RGBColor & c) const {
    return RGBColor(
        this->r + c.r,
        this->g + c.g,
        this->b + c.b
    );
}

RGBColor RGBColor::operator*(const float a) const {
    return RGBColor(
        this->r * a,
        this->g * a,
        this->b * a
    );
}

RGBColor RGBColor::operator/(const float a) const {
    return RGBColor(
        this->r / a,
        this->g / a,
        this->b / a
    );
}

RGBColor RGBColor::operator*(const RGBColor & c) const {
    return RGBColor(
        this->r * c.r,
        this->g * c.g,
        this->b * c.b
    );
}

RGBColor RGBColor::pow(double p) const {
    return RGBColor(
        ::pow(this->r, p),
        ::pow(this->g, p),
        ::pow(this->b, p)
    );
}

RGBColor & operator+=(const RGBcolor & c) {
    this->r += c.r;
    this->g += c.g;
    this->b += c.b;
    return *this;
}

RGBColor operator*(const float a, const RGBColor & c) {
    return RGBColor(
        c.r * a,
        c.g * a,
        c.b * a
    );
}
