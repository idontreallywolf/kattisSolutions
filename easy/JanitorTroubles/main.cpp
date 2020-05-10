#include <iostream>
#include <cmath>

int main() {
    double a,b,c,d;
    std::cin >> a >> b >> c >> d;
    double s = (a+b+c+d)/2;

    // Brahmagupta’s formula
    printf("%.6f", sqrt((s-a)*(s-b)*(s-c)*(s-d)));
    return 0;
}
