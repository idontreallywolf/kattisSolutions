#include <iostream>

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::cout << ((s == "OCT 31" || s == "DEC 25") ? "yup":"nope") << std::endl;
    return 0;
}
