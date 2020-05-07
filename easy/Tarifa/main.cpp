#include <iostream>

int main() {
    int x, n, temp, mb;
    std::cin >> x >> n;

    mb = x;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        mb = (mb - temp) + x;
    }

    std::cout << mb << std::endl;
    return 0;
}
