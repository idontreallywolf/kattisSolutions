#include <iostream>

int main() {
    int n; float b,p;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> b >> p;
        printf("%.4f %.4f %.4f\n", (60 * (b-1)) / p, (60 * b) / p, (60 * (b+1)) / p);
    }
    return 0;
}
