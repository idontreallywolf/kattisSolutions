#include <iostream>
#include <unordered_map>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string alpha = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < n; i++) {
        std::unordered_map<char, int> uMap;
        std::string line;
        std::getline(std::cin, line);
        std::transform(line.begin(), line.end(), line.begin(), ::tolower);

        for (int l = 0; l < line.length(); l++)
            if((int)line[l] >= 97 && (int)line[l] <= 122)
                uMap.insert(std::make_pair(line[l], 1));

        // find missing chars
        std::string missing = "";
        for (int j = 0; j < alpha.length(); j++)
            if(uMap.find(alpha[j]) == uMap.end())
                missing += alpha[j];

        if(missing.length() > 0)
            printf("missing %s\n", missing.c_str());
        else
            printf("pangram\n");
    }

    return 0;
}
