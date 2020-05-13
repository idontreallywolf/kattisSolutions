#include <iostream>
#include <map>
#include <utility>

struct ProblemData {
    int time = 0;
    int fails = 0;
    bool solved = false;
};

int main() {
    std::map<char, ProblemData> contestLog;
    int mins;

    while(std::cin >> mins && mins != -1) {

        char problemID;
        std::string problemStatus;
        std::cin >> problemID >> problemStatus;

        auto findKey = contestLog.find(problemID);
        if(findKey != contestLog.end()) {
            // update problemData if not already solved
            if(findKey->second.solved == false) {
                findKey->second.time = mins;
                findKey->second.fails = (problemStatus == "wrong" ?
                    findKey->second.fails+1 : findKey->second.fails
                );
                findKey->second.solved = (problemStatus == "wrong" ?
                    (findKey->second.solved ? true : false): true
                );
            }
            continue;
        }

        // create new pair
        bool isWrong = (problemStatus == "wrong" ? true : false);
        ProblemData pd = {
            mins,                       // time
            (isWrong ? 1 : 0),          // fails
            (isWrong ? false : true)    // solved
        };


        if(findKey == contestLog.end())
            contestLog.insert(std::make_pair(problemID, pd));
    }

    // calculate time & penalties
    int problemsSolved = 0;
    int totalTime = 0;
    for (auto const& x : contestLog) {
        problemsSolved += (x.second.solved ? 1 : 0);
        totalTime += (x.second.solved ? (x.second.time + (x.second.fails * 20)) : 0);
    }

    printf("%d %d\n", problemsSolved, totalTime);
    return 0;
}
