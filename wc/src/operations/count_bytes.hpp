#pragma once

#ifndef COUNT_BYTES_HPP
#define COUNT_BYTES_HPP

#include <string>

#include "operation.hpp"

struct count_bytes : operation {
    size_t execute(std::istream& in) override;
};

#endif
