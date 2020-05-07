#include <iostream>
#include <cmath>

int main() {
    int i; std::cin >> i;
    printf("%.0f\n", pow((1 << i) + 1, 2));
    return 0;
}
