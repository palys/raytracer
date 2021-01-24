#ifndef __FileProvider__
#define __FileProvider__

#include <string>
#include <fstream>

class FileProvider {
    std::string dir;
public:
    FileProvider();
    std::ofstream new_file();
};

#endif