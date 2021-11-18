#include <iostream>

#include "OtherFile.h"

int main(int argc, const char *argv[]) {
    int final_answer = OtherFile::getValue();
    std::string abc = HELLO;
        std::cout << abc << "dynamicX:"<<final_answer << std::endl;
    return 0;
}
