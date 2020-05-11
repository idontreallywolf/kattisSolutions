#include <iostream>
#include <string>

int main() {
    std::string game;
    std::cin >> game;
    int scores[2] = {0, 0};
    int scoreDiff = 1;

    //std::cout << "A: " << scores[0] << ", B: " << scores[1] << std::endl;
    for (int i = 0; i < game.length()-1; i += 2) {
        // add score
        scores[(game[i] == 'A' ? 0:1)] += ((int)game[i+1] - '0');
        //std::cout << "A: " << scores[0] << ", B: " << scores[1] << std::endl;

        // check if there's a tie
        if((scores[0] == 10) && (scores[0] == scores[1]))
            scoreDiff = 2;

        // any of players over or at 11?
        if(scores[0] >= 11 || scores[1] >= 11)
            if(abs(scores[0] - scores[1]) >= scoreDiff) {
                std::cout << (scores[0] > scores[1] ? "A":"B") << std::endl;
                break;
            }
    }

    return 0;
}
