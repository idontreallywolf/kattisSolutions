#include <iostream>

int main() {
    std::string y,p,newName;
    std::cin >> y >> p;

    if (y[y.length()-1] == 'e') {
        newName = y + 'x' + p;
    } else if(y[y.length()-1] == 'a' || y[y.length()-1] == 'i' || y[y.length()-1] == 'o' || y[y.length()-1] == 'u') {
        newName = y.substr(0, y.length()-1) + "ex" + p;
    } else if(y.substr(y.length()-2) == "ex") {
        newName = y + p;
    } else {
        newName = y + "ex" + p;
    }

    std::cout << newName << std::endl;
}
