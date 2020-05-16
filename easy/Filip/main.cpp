#include <iostream>
#include <cmath>
#include <algorithm>

char getLargest(int a, int b);

int main() {
    int a,b;
    std::cin >> a >> b;
    char largest = getLargest(a, b);
    std::string rev = std::to_string((largest == 'a' ? a:b));
    std::reverse(rev.begin(), rev.end());
    std::cout << rev << std::endl;
    return 0;
}

char getLargest(int a, int b) {
    if((a % 10) > (b % 10)) return 'a';
    if((a % 10) < (b % 10)) return 'b';
    if(floor(a / 10) == 0 || floor(b / 10) == 0) return 'a';
    return getLargest(floor(a / 10), floor(b / 10));
}
