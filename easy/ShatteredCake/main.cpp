#include <iostream>

int main() {
    int w, pieces, totArea = 0;
    std::cin >> w >> pieces;

    for (int i = 0; i < pieces; i++) {
        int x, y; std::cin >> x >> y;
        totArea += x * y;
    }

    std::cout << (totArea / w) << std::endl;
    return 0;
}
