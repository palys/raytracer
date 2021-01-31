#include<iostream>
#include "Vector3D.hpp"

int main() {
    Vector3D v1(1, 2, 3), v2(2, 5, 7);
    std::cout << "v1: " << v1 << "\n"
              << "v2: " << v2 << "\n"
              << "v1 + v2: " << v1 + v2 << "\n"
              << "v1 - v2: " << v1 - v2 << "\n"
              << "v1 * 3: " << v1 * 3 << "\n"
              << "3 * v2: " << 3 * v2 << "\n"
              << "v1 * v2: " << v1 * v2 << "\n"
              << "v1 x v2: " << (v1 ^ v2) << "\n"
              << "v1 / 4: " << v1 / 4 << "\n"
              << "v1.length(): " << v1.length() << "\n"
              << "v1.length_sqr(): " << v1.length_sqr() << "\n"
              << "-v2: " << -v2 << "\n"
              << "v1.normal(): " << v1.normal() << "\n"
              << "v1 += v2: " << (v1 += v2) << "\n"
              << "v1 *= 4: " << (v1 *= 4) << "\n"
              << "v1 -= v2: " << (v1 -= v2) << "\n"
              << "v1 ^= v2: " << (v1 ^= v2) << "\n";
    return 0;
}
