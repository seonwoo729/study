#include <iostream>

#include "TestClass.hpp"

int main(int argc, char** argv) {
    Test::getInstance().setSampleText("Hello World.");

    std::cout << Test::getInstance().getSampleText() << std::endl;

    return 0;
}