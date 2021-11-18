#include <iostream>

#include "otherfile/OtherFile.h"

int main(int argc, const char *argv[]) {
    int final_answer = OtherFile::getValue();
        std::cout << "dynamicX:"<<final_answer << std::endl;
    return 0;
}
