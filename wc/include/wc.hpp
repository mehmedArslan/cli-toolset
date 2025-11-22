#ifndef WC_HPP
#define WC_HPP

#include <string>

int count_bytes(const std::string& fileName);
int get_lines(const std::string& fileName);
int get_words(const std::string& fileName);
size_t get_characters(const std::string& fileName);

#endif