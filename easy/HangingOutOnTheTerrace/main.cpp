#include <iostream>

int main() {
    int l, e, counter = 0, current = 0; // limit & events
    std::cin >> l >> e;

    for (int i = 0; i < e; i++) {
        std::string event;
        int quantity;
        std::cin >> event >> quantity;

        if(event == "leave")
            quantity = -quantity;

        if(current + quantity > l) {
            counter++;
            continue;
        }
        current += quantity;
    }

    std::cout << counter << std::endl;

    return 0;
}
