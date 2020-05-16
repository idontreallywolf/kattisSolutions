#include <iostream>
#include <cmath>

int digitSum(int a, int sum = 0);

int main() {
    int n;

    while(std::cin >> n && n > 0) {
        int nSum = digitSum(n);

        if(nSum == 1) {
            std::cout << 100 << std::endl;
            continue;
        }

        int i = 11;
        while(digitSum(n * i) != nSum)
            i++;

        std::cout << i << std::endl;
    }

    return 0;
}

int digitSum(int a, int sum/* = 0 */) {
    sum += a % 10;

    if(floor(a / 10) == 0)
        return sum;

    return digitSum(floor(a / 10), sum);
}
