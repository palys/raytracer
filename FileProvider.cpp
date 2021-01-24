#include "FileProvider.hpp"

#include <fstream>
#include <chrono>
#include <ctime>
#include <sstream>

#include <iostream>

FileProvider::FileProvider(): dir("out") {

}

std::string sanitize(std::string text) {
    std::string s;
    for (auto & c : text) {
        if (c != ' ' && c != '\n' && c!= '\r' && c != ':') {
            s += c;
        }
    }
    return s;
}

std::ofstream FileProvider::new_file() {
    auto now = std::chrono::system_clock::now();
    auto t_c = std::chrono::system_clock::to_time_t(now);
    std::stringstream name;
    name << dir << "/" << std::ctime(&t_c) << ".tga";
    auto file_name = sanitize(name.str());

    std::ofstream file;
    file.open(file_name);
    std::cout << "New file " << file_name << "\n";
   
    return file;
}