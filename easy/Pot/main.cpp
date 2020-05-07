#include <iostream>
#include <cmath>

int main() {
    int n, tmp, sum = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        sum += pow((tmp / 10), (tmp % 10));
    }

    std::cout << sum << std::endl;
    return 0;
}
