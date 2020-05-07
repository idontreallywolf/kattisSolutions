#include <iostream>

int main() {
    int n; float q, y, sum;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> q >> y;
        sum += (q * y);
    }
    printf("%.3f", sum);
    return 0;
}
