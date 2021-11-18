#include <iostream>

#include "OtherFile/OtherFile.hpp"

int main(int argc, const char *argv[]) {
    std::vector<int> final_answer = OtherFile::getValue();
    int final_answer2 = final_answer[0]*100 + final_answer[1]*10 +final_answer[2];
        std::cout << "dynamicX:"<<final_answer2 << std::endl;
    return 0;
}
