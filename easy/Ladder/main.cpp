#include <iostream>
#include <cmath>
#include <math.h>

int main() {
    int h, v;
    std::cin >> h >> v;
    std::cout << std::ceil(h / std::sin(v * M_PI / 180)) << std::endl;
    return 0;
}
