#include <iostream>
#include <cmath>

int main() {
    int a,b,c; std::cin >> a >> b >> c;
    printf("%d\n", std::max(c-b-1, std::max(b-a-1,0)));
    return 0;
}
