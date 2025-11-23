#pragma once

#include "count_lines.hpp"

#include <iostream>
#include <fstream>
#include <format>

size_t count_lines::execute(const std::string& fileName) {
    size_t numberOfLines = 0;
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