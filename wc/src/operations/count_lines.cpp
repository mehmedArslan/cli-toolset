#pragma once

#include "count_lines.hpp"

#include <iostream>
#include <fstream>
#include <format>

size_t count_lines::execute(std::istream& in) {
    size_t numberOfLines = 0;

    std::string line;
    while (std::getline(in, line)) {
        ++numberOfLines;
    }

    return numberOfLines;
}