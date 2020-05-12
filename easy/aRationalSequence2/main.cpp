#include <iostream>
#include <vector>

struct Node { int p; int q; };

int main() {
    int n; std::cin >> n;

    while(n--) {
        int k, p, q;
        std::string pq;
        std::cin >> k >> pq;

        // process input
        size_t slashPos = pq.find("/");
        if(slashPos != std::string::npos) {
            p = std::stoi(pq.substr(0, slashPos));
            q = std::stoi(pq.substr(slashPos+1, pq.length()));
        }

        // Root node
        int nodeID = 1;
        std::vector<Node> nodes;

        // Trace back to root node
        while(p > 1 || q > 1) {
            Node n = {p, q};
            nodes.push_back(n);

            if(p > q) { // RIGHT node
                p = std::abs(p-q);
                continue;
            }

            q = std::abs(p-q);
        }

        // Find node ID
        for (std::vector<Node>::reverse_iterator it = nodes.rbegin(); it != nodes.rend(); ++it) {

            // left or right child node?
            if(it->p > it->q) { // RIGHT node
                nodeID = (nodeID * 2) + 1;
                continue;
            }

            nodeID = nodeID * 2;
        }

        printf("%d %d\n", k, nodeID);

    }
    return 0;
}

// P > Q : rightNode
// Q > P : leftNode
