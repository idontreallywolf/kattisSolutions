#include <iostream>

void moveA(char cups[]) { char temp = cups[0]; cups[0] = cups[1]; cups[1] = temp; }
void moveB(char cups[]) { char temp = cups[1]; cups[1] = cups[2]; cups[2] = temp; }
void moveC(char cups[]) { char temp = cups[0]; cups[0] = cups[2]; cups[2] = temp; }

int main() {
    std::string moves;
    std::cin >> moves;

    char cups[] = "*--";

    for(char const &c: moves) {
        if(c == 'A')      moveA(cups);
        else if(c == 'B') moveB(cups);
        else if(c == 'C') moveC(cups);
    }

    if(cups[0] == '*')      printf("%d\n", 1);
    else if(cups[1] == '*') printf("%d\n", 2);
    else if(cups[2] == '*') printf("%d\n", 3);

    return 0;
}
