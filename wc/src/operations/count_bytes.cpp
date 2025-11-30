#pragma once

#include <iostream>
#include <fstream>
#include <format>

#include "count_bytes.hpp"

size_t count_bytes::execute(std::istream& in) {
    size_t op = 0;

    in.seekg(0, std::ios::end);
    op = in.tellg();

    return op;
}
