#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cin.ignore();
    std::string temp;
    for(int i = 0; i < a; i++) {
        std::getline(std::cin, temp);
    }
    std::cout << b << std::endl;
    return 0;
}
