#include <iostream>

int main() {
    int n; std::cin >> n;
    int sum = 0, div = n;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        std::cin >> temp;
        if(temp >= 0) {
            sum += (temp > 0 ? temp:0);
            continue;
        }
        div--;
    }
    printf("%.6f\n", (((float)sum) / div));
    return 0;
}
