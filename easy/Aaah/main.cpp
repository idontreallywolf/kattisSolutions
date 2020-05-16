#include <iostream>

int main() {
    std::string jon, doc;
    std::cin >> jon >> doc;
    std::cout << (jon.length() >= doc.length() ? "go":"no") << std::endl;
    return 0;
}
