#include "wc.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <format>

int count_bytes(const std::string& fileName) {
    int op = 0;
    try {
        std::ifstream file;
        file.exceptions(std::ifstream::badbit | std::ifstream::failbit);
        if (!file.is_open()) {
            std::cout << std::format("unable to open file \"{}\".", fileName) << std::endl;
        }

        file.open(fileName, std::ios::binary);
        file.seekg(0, std::ios::end);
        op = file.tellg();
        file.close();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return op;
}