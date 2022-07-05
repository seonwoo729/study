#include "Sample.hpp"

Sample::Sample() {}

Sample::~Sample() {}

Sample& Sample::getInstance() {
    static Sample Sample;
    return Sample;
}

void Sample::setSampleText(const std::string& text) {
    mSampleText = text;
}

const std::string Sample::getSampleText() {
    return mSampleText;
}