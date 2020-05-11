#include <iostream>
#include <cmath>
#include <climits>

int main() {
    int n; std::cin >> n;
    int totalDays = 0;
    int eventDays[n][2];

    int minDay = INT_MAX,
        maxDay = INT_MIN;

    for(int i = 0; i < n; i++) {
        int s, t;
        std::cin >> s >> t;

        totalDays += abs(s - t) + 1;
        eventDays[i][0] = s;
        eventDays[i][1] = t;

        if(s < minDay) minDay = s;
        if(t > maxDay) maxDay = t;
    }

    for(int i = minDay; i <= maxDay; i++){
        int toRemove = 0;

        for(int j = 0; j < n; j++)
            if(i >= eventDays[j][0] && i <= eventDays[j][1])
                toRemove++;

        totalDays -= (toRemove > 1 ? toRemove-1:0);
    }

    std::cout << totalDays << std::endl;
}
