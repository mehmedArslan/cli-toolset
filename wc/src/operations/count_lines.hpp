#pragma once

#ifndef COUNT_LINES_HPP
#define COUNT_LINES_HPP

#include <string>

#include "operation.hpp"

struct count_lines : operation {
    size_t execute(std::istream& in) override;
};

#endif