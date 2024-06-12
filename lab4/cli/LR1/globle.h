#include <string>
#include <vector>
#include <unordered_map>
#include <functional>

// 定义 Grammer 结构体
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

// 为 Grammer 特化 std::hash
namespace std
{
    template <>
    struct hash<Grammer>
    {
        size_t operator()(const Grammer &g) const
        {
            size_t h1 = hash<string>()(g.sign);
            size_t h2 = hash<string>()(g.sign_forward);
            size_t h3 = 0;
            for (const auto &s : g.grammer)
            {
                h3 ^= hash<string>()(s) + 0x9e3779b9 + (h3 << 6) + (h3 >> 2);
            }
            return h1 ^ h2 ^ h3;
        }
    };
}

