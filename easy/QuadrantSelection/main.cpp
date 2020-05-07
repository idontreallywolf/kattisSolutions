#include <iostream>
#include <cmath>

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << (x > 0 && y > 0 ? 1:
                    (x < 0 && y > 0 ? 2:
                        (x < 0 && y < 0 ? 3:
                            (x > 0 && y < 0 ? 4:1)
                        )
                    )
                 ) << std::endl;
    return 0;
}
