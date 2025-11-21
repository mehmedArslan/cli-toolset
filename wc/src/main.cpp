#include <iostream>
#include <string>
#include <format>
#include <vector>

#include "wc.hpp"

int main(int argc, char* argv[]) {
    std::string dataPath = "../../data/";
    std::string fileName, completeFilePath;
    int op = 0;
    if (argc > 0) {
        fileName = argv[2];
        completeFilePath = dataPath + fileName;
        std::vector<std::string> args(argv + 1, argv + argc);
       
        for (const auto& arg: args) {
            if (arg == "-c") {
                op = count_bytes(completeFilePath);
            }
            else if (arg == "-l") {
                op = get_lines(completeFilePath);
            } 
            else if (arg == "-w") {
                op = get_words(completeFilePath);
            }  
        }
    }

    std::cout << std::format("{} {}", op, fileName) << std::endl;
    return 0;
}