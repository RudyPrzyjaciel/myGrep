#include <iostream>
#include <fstream>
#include <string>

#define FAILURE_STATUS -1
#define SUCCESS_STATUS 0

int main(int argc, char* argv[]) {
    std::ifstream file (argv[1]);
    if (!file.is_open()) {
        std::cout << "failure" << std::endl;
        return FAILURE_STATUS;
    }
    std::string line;
    std::cout << "looking for \""<< argv[2] << "\"" << std::endl;

    while(std::getline(file, line)) {
        if(line.find(argv[2]) != line.npos) {
            std::cout << line << std::endl;
        }
    }

    return SUCCESS_STATUS;
}
