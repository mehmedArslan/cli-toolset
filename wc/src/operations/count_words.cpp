#pragma once

#include <iostream>
#include <fstream>
#include <format>
#include <string>

#include "count_words.hpp"

size_t count_words::execute(std::istream& in) {
    size_t words = 0;

    std::string word;
    while (in >> word) {
        words++;
    }
    
    return words;
}