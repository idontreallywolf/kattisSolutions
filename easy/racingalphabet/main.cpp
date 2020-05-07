// Problem ID: racingalphabet

#include <algorithm>
#include <iostream>
#include <cmath>

double solve(std::string& str);

using namespace std;

int main() {
    int n; std::cin >> n;
    std::cin.ignore();
    std::string str;
    for (int i = 0; i < n; i++) {
        std::getline(std::cin, str);
        printf("%.10f  \n", solve(str));
    }
    return 0;
}

double solve(std::string& str) {
    double speed         = 15.0;
    double tileLength    = (2 * M_PI * 30) / 28;
    double constantT     = tileLength / speed;
    double totalTime     = 0.000000000f;

    std::string alpha   = "abcdefghijklmnopqrstuvwxyz '"; // 14
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(int i = 0; i < str.length()-1; i++) {
        int cPos     = alpha.find(str[i  ]);
        int cPosNext = alpha.find(str[i+1]);
        int indexMax = alpha.length();

        int directDistance = std::abs(cPos - cPosNext);
        int altDistance = (
            cPos > cPosNext ?
                ((indexMax - cPos) + cPosNext)
            :
                (cPos + (indexMax-cPosNext))
        );

        int shortest = std::min<int>(directDistance, altDistance);
        totalTime += ((double)(shortest) * tileLength) / speed;
    }

    return totalTime + ((double)str.length());
}
