#include <string>
#include <vector>

struct Grammer
{
    std::string sign;
    std::vector<std::string> grammer;
    std::string sign_forward;

    // 重载 == 运算符
    bool operator==(const Grammer &other) const
    {
        return sign == other.sign && grammer == other.grammer && sign_forward == other.sign_forward;
    }
};
