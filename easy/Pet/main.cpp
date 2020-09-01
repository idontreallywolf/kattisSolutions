#include <iostream>

int main() {
    int max = 0;
    int idx = 0;
    for (int i = 0; i < 5; i++) {
        int x = 0;
        for (int j = 0; j < 4; j++) {
            int y; std::cin >> y;
            x += y;
        }
        if(x > max) {
            max = x;
            idx = (i+1);
        }
    }

    std::cout << idx << " " << max << std::endl;
    return 0;
}
