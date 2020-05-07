#include <iostream>

int main() {

    int n;
    std::cin >> n;
    while(n != -1) {

        int mph = 0, hours = 0, miles = 0, tmp = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> mph;
            std::cin >> hours;

            miles += mph * (tmp > 0 ? std::abs(hours - tmp) : hours);
            tmp = hours;
        }

        std::cout << miles << " miles" << std::endl;
        std::cin >> n;
    }

    return 0;
}
