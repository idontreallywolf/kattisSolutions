#include <iostream>

int main() {
    int n, counter = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int t; std::cin >> t;
        counter += (t < 0 ? 1:0);
    }
    std::cout << counter << std::endl;
    return 0;
}
