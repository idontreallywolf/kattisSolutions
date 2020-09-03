#include <iostream>

uint32_t digitSquare(unsigned long n, int b) {
    if(n == 0) return n;
    return (n % b) * (n % b) + digitSquare(n / b, b);
}

int main() {
    int tests;
    std::cin >> tests;
    for (int i = 0; i < tests; i++) {
        int x, b, n;
        std::cin >> x >> b >> n;
        printf("%d %d\n", x, digitSquare(n, b));
    }
    return 0;
}
