#include "Image.hpp"

Image::Image(int width, int height): width(width), height(height) {
    image = new RGBColor * [width];
    for (int x = 0; x < width; x++) {
        image[x] = new RGBColor[height];
        for (int y = 0; y < height; y++) {
            image[x][y] = RGBColor();
        }
    }
}

Image::~Image() {
    for (int i = 0; i < width; i++) {
        delete[] image[i];
    }
    delete[] image;
}

Image::Image(const Image & im): width(im.width), height(im.height) {
    image = new RGBColor * [width];
    for (int x = 0; x < width; x++) {
        image[x] = new RGBColor[height];
        for (int y = 0; y < height; y++) {
            image[x][y] = im.image[x][y];
        }
    }
}

Image & Image::operator=(const Image & im) {
    if (this != &im) {
        for (int i = 0; i < width; i++) {
            delete[] image[i];
        }
        delete[] image;
        image = new RGBColor * [width];
        for (int x = 0; x < width; x++) {
            image[x] = new RGBColor[height];
            for (int y = 0; y < height; y++) {
                image[x][y] = im.image[x][y];
            }
        }
    }
    return *this;
}

RGBColor Image::get(int x, int y) {
    return image[x][y];
}

void Image::set(int x, int y, const RGBColor & color) {
    image[x][y] = color;
}