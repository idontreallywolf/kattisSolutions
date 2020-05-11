#include <iostream>

int main() {
    int a,b,c,d;
    int players[2];

    for (int i = 0; i < 2; i++) {
        std::cin >> a >> b >> c >> d;
        players[i] = (a + b + c + d);
    }

    std::cout << (players[0] > players[1] ? "Gunnar":(players[0] == players[1] ? "Tie":"Emma")) << std::endl;
    return 0;
}
