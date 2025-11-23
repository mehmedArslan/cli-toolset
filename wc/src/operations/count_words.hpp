#pragma once

#ifndef COUNT_WORDS_HPP
#define COUNT_WORDS_HPP

#include <string>

#include "operation.hpp"

struct count_words: operation {
    size_t execute(const std::string& fileName) override;
};

#endif