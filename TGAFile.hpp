#ifndef __TGAFile__
#define __TGAFile__

#include <fstream>
#include "Image.hpp"

class TGAFile {
    std::ofstream * file;
    void save_to_file(Image & image);
    void close();
public:
    TGAFile(std::ofstream & file);
    static void save(Image & image);
};

#endif