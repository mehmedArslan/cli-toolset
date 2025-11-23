#pragma once

#include <iostream>
#include <fstream>
#include <format>
#include <string>

#include "count_words.hpp"

size_t count_words::execute(const std::string& fileName) {
    size_t words = 0;
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