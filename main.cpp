#include<iostream>
#include "Image.hpp"
#include "RGBColor.hpp"
#include "FileProvider.hpp"

int main() {
    std::cout << "test\n";
    Image m(50, 50);
    m.set(5, 7, RGBColor(0.5, 0.7, 0.1));
    std::cout << m.get(0, 0) << "\n" << m.get(5, 7) << "\n";
    FileProvider fileProvider;
    auto file = fileProvider.new_file();
    file << "text" << "\n";
    file.close();
    return 0;
}