#ifndef __FileProvider__
#define __FileProvider__

#include <string>
#include <fstream>
#include "TGAFile.hpp"

class FileProvider {
    std::string dir;
public:
    FileProvider();
    std::ofstream * new_file();
    std::ofstream * new_file(std::string extension);
    TGAFile new_tga_file();
};

#endif