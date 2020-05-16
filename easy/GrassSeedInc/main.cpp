#include <iostream>

int main() {
    float cost, lawns, counter = 0;
    std::cin >> cost >> lawns;

    for (int i = 0; i < lawns; i++) {
        float w, l; std::cin >> w >> l;
        counter += (w * l);
    }

    printf("%.6f\n", counter * cost);
}
