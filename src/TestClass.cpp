#include "TestClass.hpp"

Test::Test() {}

Test::~Test() {}

Test& Test::getInstance() {
    static Test sTest;
    return sTest;
}

void Test::setSampleText(const std::string& text) {
    mSampleText = text;
}

const std::string Test::getSampleText() {
    return mSampleText;
}