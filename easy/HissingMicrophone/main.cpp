#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    std::cout << (s.find("ss") != std::string::npos ? "hiss":"no hiss") << std::endl;
    return 0;
}
