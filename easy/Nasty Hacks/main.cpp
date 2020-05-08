#include <algorithm>
#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int r, e, c;
        std::cin >> r >> e >> c;
        std::cout << (e - c > r ? "advertise":(e - c < r ? "do not advertise":"does not matter")) << std::endl;
    }
    return 0;
}
