#include "wc.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <format>
#include <locale>
#include "rang.hpp"

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

    std::string word;
    while (file >> word) {
        words++;
    }
    
    file.close();
    return words;
}

size_t get_characters(const std::string& fileName) {
    size_t chars = 0;
    std::ifstream file(fileName, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << std::format("Unable to open file \"{}\"", fileName);
        return -1;
    }

    setlocale(LC_ALL, "");
    std::cout << rang::fg::red << "LC_ALL: " << rang::fg::magenta << setlocale(LC_ALL, NULL) 
        << rang::style::reset << std::endl;

    
    
    return chars;
}

// TODO: fn to check if file handling failed and throw error OR make a fn to open file
// bool checkIfFileFailedToOpen(const std::string& fileName, std::ifstream file) {
//     if (!file.is_open()) {
//         std::cerr << std::format("Unable to open file \"{}\"", fileName);
//         return -1;
//     }
//     return 
// }