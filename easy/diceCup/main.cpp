#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    for (int i = std::min(n, m); i <= std::max(n, m); i++)
        std::cout << (i+1) << std::endl;
    return 0;
}
