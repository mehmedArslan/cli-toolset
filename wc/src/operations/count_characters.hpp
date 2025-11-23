#pragma once

#ifndef COUNT_CHARACTERS_HPP
#define COUNT_CHARACTERS_HPP

#include <string>

#include "operation.hpp"

struct count_characters: operation {
    size_t execute(const std::string& fileName) override;
};

#endif