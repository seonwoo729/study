#include <string>

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