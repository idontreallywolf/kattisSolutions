#include <iostream>

int main() {
    int x,y,n; std::cin >> x >> y >> n;
    for (int i = 1; i <= n; i++)
        std::cout << ((i % x == 0) && (i % y == 0) ? "FizzBuzz":(i % x == 0 ? "Fizz":(i % y == 0 ? "Buzz": std::to_string(i) ))) << std::endl;
    return 0;
}
