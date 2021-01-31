#include<iostream>
#include "Image.hpp"
#include "RGBColor.hpp"
#include "TGAFile.hpp"

int main() {
    std::cout << "test\n";
    Image m(60, 50);
    m.set(5, 7, RGBColor(0.5, 0.7, 0.1));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            m.set(i + 10, j + 10, RGBColor(1, 0, 0));
            m.set(i + j + 20, j + 10, RGBColor(0, 1, 0));
            m.set(i + 30, i + j + 20, RGBColor(0, 0, 1));
        }
    }
    TGAFile::save(m);
    return 0;
}
