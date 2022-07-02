#include <string>

class Test {
public:
    static Test& getInstance();

    void setSampleText(const std::string& text);
    const std::string getSampleText();

private:
    Test();
    ~Test();

private:
    std::string mSampleText;
};