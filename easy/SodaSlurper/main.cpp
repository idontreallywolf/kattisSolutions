#include <iostream>
#include <cmath>

int main() {
    int e,f,c; std::cin >> e >> f >> c;
    int bought = 0;

    e += f;
    while(e > 0) {
        int sodas = floor(e / c);
        bought += sodas;
        e = (e % c) + sodas;
        if(e < c)
            break;
    }

    std::cout << bought << std::endl;
    return 0;
}
