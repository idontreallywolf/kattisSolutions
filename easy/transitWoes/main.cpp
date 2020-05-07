#include <iostream>

int main() {
    int s, t, n;
    std::cin >> s >> t >> n;

    int routes[n + 1];
    int rideTime[n];
    int arrivals[n];
    int walkTime = 0;

    for (int i = 0; i < (n+1);  i++) std::cin >> routes[i];
    for (int i = 0; i < n;      i++) std::cin >> rideTime[i];
    for (int i = 0; i < n;      i++) std::cin >> arrivals[i];

    for (int i = 0; i < n; i++)
        walkTime += routes[i] + std::abs(arrivals[i] - routes[i]) + rideTime[i];

    walkTime += routes[n];

    std::cout << (walkTime <= t ? "yes":"no") << std::endl;
    return 0;
}
