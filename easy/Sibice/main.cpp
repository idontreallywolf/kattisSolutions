#include <iostream>
#include <cmath>

int main() {
    int n, w, h;
    std::cin >> n >> w >> h;
    for (int i = 0; i < n; i++) {
        int m; std::cin >> m;
        if(m == w || m == h || m <= sqrt(pow(w, 2) + pow(h, 2))) {
            std::cout << "DA" << std::endl;
        } else {
            std::cout << "NE" << std::endl;
        }
    }
    return 0;
}
