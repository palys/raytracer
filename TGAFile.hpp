#ifndef __TGAFile__
#define __TGAFile__

#include <fstream>
#include "Image.hpp"

class TGAFile {
    std::ofstream * file;
public:
    TGAFile(std::ofstream & file);
    void save(Image & image);
    void close();
};

#endif