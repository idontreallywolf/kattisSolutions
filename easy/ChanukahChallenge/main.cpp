#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int k, n;
        std::cin >> k >> n;
        std::cout << k << " " << (int)((2+(n+1)) * ((float)n/2)) << std::endl;
    }

    return 0;
}
