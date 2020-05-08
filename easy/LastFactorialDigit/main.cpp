#include <algorithm>
#include <iostream>
#include <cmath>

int factorial(int x);

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int d; std::cin >> d;
        std::cout << factorial(d) % 10 << std::endl;
    }
    return 0;
}

int factorial(int x) {
    if( x >= 1 )
        return x * factorial(x-1);
    return 1;
}
