#ifndef __Image__
#define __Image__

#include "RGBColor.hpp"

class Image {
    RGBColor ** image;
public:
    int width, height;
    Image(int width, int height);
    ~Image();
    Image(const Image & im);
    Image & operator=(const Image & im);
    RGBColor get(int x, int y);
    void set(int x, int y, const RGBColor & color);
};

#endif