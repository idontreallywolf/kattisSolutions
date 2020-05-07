#include <iostream>

int main() {
    std::string str, txt;
    std::cin >> str;
    txt += str[0];

    for (int i = 0; i < str.length(); i++)
        if(str[i] == '-')
            txt += str[i+1];

    std::cout << txt << std::endl;
    return 0;
}
