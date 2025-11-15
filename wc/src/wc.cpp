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
        file.open(fileName, std::ios::binary);
        if (!file.is_open()) {
            std::cout << std::format("unable to open file \"{}\".", fileName) << std::endl;
        }

        file.seekg(0, std::ios::end);
        op = file.tellg();
        file.close();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return op;
}

int get_lines(const std::string& fileName) {
    int numberOfLines = 0;
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cerr << std::format("unable to open file \"{}\"", fileName) << std::endl; 
    }

    std::string line;
    while (std::getline(file, line)) {
        ++numberOfLines;
    }
    file.close(); 

    return numberOfLines;
}

int get_words(const std::string& fileName) {
    int words = 0;
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cerr << std::format("unable to open file \"{}\".", fileName);
    }

    
    file.close();
    return words;
}