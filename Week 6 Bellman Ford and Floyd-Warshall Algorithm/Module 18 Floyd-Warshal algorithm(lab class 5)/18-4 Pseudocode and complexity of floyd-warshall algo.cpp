

// Pseudocode of Floyd - warshall algorithm

Input : A weighted graph as an adjacency matrix;
Output : All pair shortest distance;

Time complexity = O(v^2) + O(v^3) = O(v^3);
space complexity = O(v^2)

-> Create a distance matrix "d" where d[i][j] = x, where there is a direct edge from
    node "i" to node "j" and the cost is "x"; //O(v^2)

-> for all node "i" d[i][j] = 0;
-> for all nodes "i" and "j" where there is not direct edge from "i" to "j",
    d[j][j] = InF;

-> for all node "k"; // O(v)
-> for all possible node "u"; //for all node pair (u,v) //O(v)
    - for all possible node "v"; // O(v)
        - d[u][v] = min(d[u][v], d[u][k] + d[k][v]); // total O(v*v*v) = O(v^3)


-> Finally output all pair shortest distance "d"; //O(1));
