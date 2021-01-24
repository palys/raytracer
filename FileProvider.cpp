#include "FileProvider.hpp"

#include <fstream>
#include <sstream>
#include <ctime>
#include <iostream>

FileProvider::FileProvider(): dir("out") {

}

std::ofstream * FileProvider::new_file() {
    time_t now = std::time(nullptr);
    std::stringstream name;
    auto time = std::localtime(&now);
    name << dir << "/" 
        << time->tm_year + 1900 << "-" 
        << time->tm_mon + 1 << "-"
        << time->tm_mday << "-" 
        << time->tm_hour << "-"
        << time->tm_min << "-"
        << time->tm_sec
        << ".tga";
    auto file_name = name.str();

    std::ofstream * file = new std::ofstream(file_name, std::ofstream::binary);
    std::cout << "New file " << file_name << "\n";
   
    return file;
}

TGAFile FileProvider::new_tga_file() {
    std::ofstream * file = new_file();
    return TGAFile(*file);
}