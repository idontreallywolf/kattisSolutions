#include <iostream>
#include <map>

int main() {
    std::string message;
    std::cin >> message;
    std::map<std::string, int> hm;

    int wordLength = message.length() / 3;

    for (int i = 0; i < (wordLength * 3); i += wordLength) {
        std::string word = message.substr(i, wordLength);
        auto findKey = hm.find(word);

        if(findKey != hm.end()) {
            findKey->second++;
            continue;
        }

        hm.insert(std::make_pair(word, 1));
    }

    std::string realWord;
    int max = 0;
    for(auto const& word: hm)
        if(word.second > max) {
            max = word.second;
            realWord = word.first;
        }

    std::cout << realWord << std::endl;
    return 0;
}
