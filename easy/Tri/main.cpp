#include <iostream>

int main() {
    int a,b,c; std::cin >> a >> b >> c;
    if(a - b == c) { std::cout << a << "-" << b << "=" << c << std::endl; return 0; }
    if(a + b == c) { std::cout << a << "+" << b << "=" << c << std::endl; return 0; }
    if(a * b == c) { std::cout << a << "*" << b << "=" << c << std::endl; return 0; }
    if(a / b == c) { std::cout << a << "/" << b << "=" << c << std::endl; return 0; }
    if(a == b - c) { std::cout << a << "=" << b << "-" << c << std::endl; return 0; }
    if(a == b + c) { std::cout << a << "=" << b << "+" << c << std::endl; return 0; }
    if(a == b * c) { std::cout << a << "=" << b << "*" << c << std::endl; return 0; }
    if(a == b / c) { std::cout << a << "=" << b << "/" << c << std::endl; return 0; }
    return 0;
}
