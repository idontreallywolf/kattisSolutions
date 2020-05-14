#include <iostream>
#include <vector>
#include <map>

bool isConnected(int a, int b, std::map<int, std::vector<int>> &map);
void prepareMatrix(int n, std::map<int, std::vector<int>> &map);
std::vector<int> processVertices(std::map<int, std::vector<int>> &map);
void printWeaklings(std::vector<int> weakVertices);

int main() {
    int n;
    while(std::cin >> n && n != -1) {
        std::map<int, std::vector<int>> map;
        prepareMatrix(n, map);
        printWeaklings(processVertices(map));
    }

    return 0;
}

bool isConnected(int k, int v, std::map<int, std::vector<int>> &map) {
    auto key = map.find(k);

    if(key != map.end())
        for (int i = 0; i < key->second.size(); i++)
            if(key->second.at(i) == v)
                return true;

    return false;
}

void prepareMatrix(int n, std::map<int, std::vector<int>> &map) {
    // read rows
    for (int i = 0; i < n; i++) {

        // read columns and store adjacents while
        std::vector<int> adjacents;
        for (int x = 0; x < n; x++) {
            int temp; std::cin >> temp;
            if(temp == 1)
                adjacents.push_back(x);
        }

        // store current vertex and its adjacents into map
        map.insert(std::make_pair(i, adjacents));
    }
}

std::vector<int> processVertices(std::map<int, std::vector<int>> &map) {

    // find weak vertices & store their references
    std::vector<int> weakVertices;
    for (auto const& vertex: map) {

        std::vector<int> vertexVector = vertex.second;
        // verify that each vertex is ..
        // .. part of a triangle
        int adjVectorConnections = 0;
        for (int a = 0; a < vertexVector.size(); a++) {
            for (int i = 0; i < vertexVector.size(); i++) {
                if(a == i) continue;

                if(isConnected(vertexVector.at(a), vertexVector.at(i), map))
                    adjVectorConnections++;
            }

            if(adjVectorConnections >= 1)
                break;
        }

        // weakness disgusts me
        // ... ** sigh **
        if(adjVectorConnections < 1)
            weakVertices.push_back(vertex.first);

    }
    return weakVertices;
}

void printWeaklings(std::vector<int> weakVertices) {
    for (int i = 0; i < weakVertices.size(); i++) {
        std::cout << weakVertices.at(i) << " ";
    }
    std::cout << std::endl;
}
// process the matrix into a hashmap
// verify that the vertices have atleast 2 of the adjacents connected
// save reference to weak vertices
