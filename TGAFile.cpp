#include "TGAFile.hpp"
#include "FileProvider.hpp"

const int HEADER_LENGTH = 18;

TGAFile::TGAFile(std::ofstream & file): file(&file) {
    
}

void TGAFile::close() {
    file->close();
    delete file;
}

void TGAFile::save_to_file(Image & image) {
    unsigned char header[HEADER_LENGTH];
    unsigned char * pixels = new unsigned char[image.width * image.height * 3];

    for (int i = 0; i < HEADER_LENGTH; i++) {
        header[i] = 0;
    }
    header[2] = 2;
    header[12] = 255 & image.width;
    header[13] = 255 & (image.width >> 8);
    header[14] = 255 & image.height;
    header[15] = 255 & (image.height >> 8);
    header[16] = 24;
    header[17] = 32;

    unsigned char * p = pixels;
    for (int y = 0; y < image.height; y++) {
        for (int x = 0; x < image.width; x++) {
            *p++ = 255 * image.get(x, y).r;
            *p++ = 255 * image.get(x, y).g;
            *p++ = 255 * image.get(x, y).b;
        }
    }

    for (int i = 0; i < HEADER_LENGTH; i++) {
        *file << header[i];
    }
    for (int i = 0; i < image.width * image.height * 3; i++) {
        *file << pixels[i];
    }

    delete[] pixels;
}

void TGAFile::save(Image & image) {
    FileProvider provider;
    auto file = provider.new_file("tga");
    TGAFile tga = TGAFile(*file);
    tga.save_to_file(image);
    tga.close();
}