#include <iostream>
#include <cmath>
#include <climits>

std::string decryptMessage(std::string msg, std::string key, std::string arr);

int main() {
    std::string msg, key;
    std::string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cin >> msg >> key;

    std::cout << decryptMessage(msg, key, arr) << std::endl;
    return 0;
}

std::string decryptMessage(std::string msg, std::string key, std::string arr) {
    std::string temp;
    for (int i = 0; i < key.length(); i++) {

        char c = arr[(
                arr.find(msg[i]) >= arr.find(key[i]) ?
                arr.find(msg[i]) -  arr.find(key[i])
            :  (arr.find('Z')+1) - (arr.find(key[i]) - arr.find(msg[i]))
        )];

        if(i % 2 != 0)
            c = arr[(arr.find(msg[i]) + arr.find(key[i])) % 26];

        temp += c;
    }
    return temp;
}
