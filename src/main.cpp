#include <iostream>

#include "Sample.hpp"

int main(int argc, char** argv) {
    Sample::getInstance().setSampleText("Hello World.");

    std::cout << Sample::getInstance().getSampleText() << std::endl;

    return 0;
}