#include <iostream>
#include <string>

#include "wc.hpp"

int main(int argc, char* argv[]) {
    std::string dataPath = "../../data/";
    std::string fileName;
    if (argc > 0) {
        fileName = dataPath + argv[2];
    }

    std::cout << count_bytes(fileName) << std::endl;
    return 0;
}