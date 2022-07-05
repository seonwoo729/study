#include <string>

#ifndef INCLUDE_SAMPLE_HPP
#define INCLUDE_SAMPLE_HPP

class Sample {
public:
    static Sample& getInstance();

    void setSampleText(const std::string& text);
    const std::string getSampleText();

private:
    Sample();
    ~Sample();

private:
    std::string mSampleText;
};

#endif // INCLUDE_SAMPLE_HPP