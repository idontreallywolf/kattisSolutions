#include <iostream>

int main() {
    int n, wins = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string battle;
        std::cin >> battle;

        std::size_t subIndex = battle.find("CD");
        if(subIndex == std::string::npos)
            wins++;
    }
    printf("%d\n", wins);
}
