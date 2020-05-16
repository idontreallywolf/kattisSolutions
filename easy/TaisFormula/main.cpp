#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    double sum = 0, prevT = 0, prevV = 0;
    std::cin >> n >> prevT >> prevV;
    for (int i = 0; i < n-1; i++) {
        double tempT = 0, tempV = 0;
        std::cin >> tempT >> tempV;

        sum += (((tempV + prevV) / 2) * (tempT - prevT)) / 1000;
        prevT = tempT;
        prevV = tempV;
    }

    //std::cout  << sum << std::endl;
    printf("%f\n", sum);
    return 0;
}
