#include <iostream>
#include <numeric>

int main() {
    int n, x;
    std::cin >> n >> x;

    for (int i = 0; i < n-1; i++) {
        int y; std::cin >> y;
        int gcd = std::gcd(x, y);
        printf("%d/%d\n", x/gcd, y/gcd);
    }

    return 0;
}
