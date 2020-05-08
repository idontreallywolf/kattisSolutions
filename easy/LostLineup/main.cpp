#include <algorithm>
#include <iostream>
#include <cmath>

int main() {
    int n; std::cin >> n;
    int line[n];
    line[0] = 1;

    for (int i = 2; i <= n; i++) {
        int temp; std::cin >> temp;
        line[temp+1] = i;
    }

    for (int i = 0; i < n; i++) {
        std::cout << line[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
