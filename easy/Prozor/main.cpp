#include <iostream>
#include <vector>
#include <map>

int main() {
    int w,h,k;

    std::cin >> h >> w >> k;
    std::vector<std::pair<int, int>> flyObjs;
    std::vector<std::string> grid;

    for (int i = 0; i < h; i++) {
        std::string row;

        for (int j = 0; j < w; j++) {
            char obj; std::cin >> obj;

            if(obj == '.' || obj == '*')
                row += obj;

            if((obj == '*')
            && ((j > 0 && j < (w-1)) && (i > 0 && i < (h-1)))) {
                flyObjs.push_back({j, i});
            }
        }
        grid.push_back(row);
    }

    std::map<int, std::pair<int, int>> tracker;

    // "move" the racket & scan the vector for amount of flies
    for (int y = 0; y <= (h-k); y++) {
        for (int x = 0; x <= (w-k); x++) {

            int counter = 0;
            for(auto const& pos: flyObjs) {

                // skip racket edges
                if((pos.first <= x || pos.first >= (x+(k-1)))
                && (pos.second <= y || pos.second >= (y+(k-1)))) {
                    continue;
                }

                if((pos.first > x && pos.first < (x+(k-1)))
                && (pos.second > y && pos.second < (y+(k-1)))) {
                    counter++;
                }
            }

            // if any flies were in the area, save them; not from their deaths ofc.
            if(counter > 0 && tracker.find(counter) == tracker.end())
                tracker.insert(std::make_pair(counter, std::make_pair(x, y)));

        }
    }

    std::cout << tracker.rbegin()->first << std::endl;
    int picPosX = tracker.rbegin()->second.first;
    int picPosY = tracker.rbegin()->second.second;

    // draw array
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {

            if((j >= picPosX && j <= (picPosX+(k-1)))
            && (i >= picPosY && i <= (picPosY+(k-1)))) {

                // edges
                if(j == picPosX || j == picPosX+(k-1))
                    grid[i][j] = '|';

                if(i == picPosY || i == picPosY+(k-1))
                    grid[i][j] = '-';

                // corners
                if((j == picPosX       && i == picPosY)             // top left
                || (j == picPosX+(k-1) && i == picPosY)             // top right
                || (j == picPosX       && i == picPosY+(k-1))       // bottom left
                || (j == picPosX+(k-1) && i == picPosY+(k-1))) {    // bottom right
                    grid[i][j] = '+';
                }

            }

        }
        std::cout << grid[i] << "\n";
    }
    return 0;
}
