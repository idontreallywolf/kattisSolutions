#include <iostream>
#include <vector>

int whichDay(int d, int m) {
    int dayIndex = 4;

    for (int i = 1; i <= m; i++) {
        if(i == m) {
            dayIndex += ((d % 7)-1);
            break;
        }

        if(i == 2 && m > 2) continue;

        if(i <= 7)
            dayIndex += ((i % 2 == 0 ? 30:31) % 7);
        else
            dayIndex += ((i % 2 == 0 ? 31:30) % 7);
    }

    return (dayIndex-1) % 7;
}

int main() {
    int d, m;
    std::cin >> d >> m;
    std::vector<std::string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("%s\n", days[whichDay(d, m)].c_str());
    return 0;
}
