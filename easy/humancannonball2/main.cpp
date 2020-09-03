#include <iostream>
#include <cmath>

int main() {
    int tests;
    std::cin >> tests;
    for (int i = 0; i < tests; i++) {
        float v,a,x1,h1,h2;
        float g = 9.81f;
        std::cin >> v >> a >> x1 >> h1 >> h2;

        // convert to degrees
        a = (a * M_PI) / 180.0f;

        // calculate time of flight
        float t = x1 / (v * std::cos(a));

        // input to calc x & y
        float x = v * t * std::cos(a);
        float y = v * t * std::sin(a) - (0.5f * g * std::pow(t, 2));

        if(y > (h1+1) && y < (h2-1)) {
            printf("%s\n", "Safe");
        } else {
            printf("%s\n", "Not Safe");
        }
    }
    return 0;
}
