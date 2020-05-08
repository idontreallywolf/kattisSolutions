#include <algorithm>
#include <iostream>
#include <cmath>

int main() {
    int n; std::cin >> n;

    for (int i = 0; i < n; i++) {
        int temp; std::cin >> temp;
        std::cout << temp << (temp % 2 == 0 ? " is even":" is odd") << std::endl;
    }

    return 0;
}
