#include <iostream>
#include <boost/typeof/typeof.hpp>
#include "OtherFile.h"

int main(int argc, const char *argv[]) {
    int final_answer = OtherFile::getValue();
        BOOST_AUTO(abc,666);
        std::cout << "dynamicX:"<<final_answer << abc << std::endl;
    return 0;
}
