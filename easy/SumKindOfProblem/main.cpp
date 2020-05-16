#include <iostream>
#include <cmath>

int sumOfPositives(int n);
int sumOfOdds(int n);
int sumOfEvens(int n);

int main() {
    int p; std::cin >> p;

    for (int i = 0; i < p; i++) {
        int k, n;
        std::cin >> k >> n;
        printf("%d %d %d %d\n", k, sumOfPositives(n), sumOfOdds(n), sumOfEvens(n));
    }

    return 0;
}

int sumOfPositives(int n) { return  (n * n + n) / 2;     }
int sumOfOdds(int n)      { return  n * n;               }
int sumOfEvens(int n)     { return  n * (n + 1);         }
