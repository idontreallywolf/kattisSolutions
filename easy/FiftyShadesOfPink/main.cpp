#include <iostream>
#include <algorithm>

int main() {
    int n; std::cin >> n;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        std::string colorName; std::cin >> colorName;
        std::transform(colorName.begin(), colorName.end(), colorName.begin(), ::tolower);

        size_t pink = colorName.find("pink");
        size_t rose = colorName.find("rose");

        if(pink != std::string::npos
        || rose != std::string::npos)
            counter++;
    }

    if(counter > 0)
        printf("%d\n", counter);
    else
        printf("%s\n", "I must watch Star Wars with my daughter");

    return 0;
}
