#include <algorithm>
#include <iostream>
#include <cmath>

int main() {
    int n, v, h;
    std::cin >> n >> v >> h;
    printf("%d\n", std::max(n - v, v) * std::max(n - h, h) * 4);
    return 0;
}
