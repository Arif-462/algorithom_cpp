#include <bits/stdc++.h>
using namespace std;

int main() {

    return 0;
}

/*
    // input-> a weighted graph and a source
    // output-> distance of all nodes from the source node




formula of distance:


have u--v edge
if dist[u] + cost(u, v) < distance[v]
    d[v] = d[u] + c(u,v)



Pseuedocode of dijkstra;

    // space complexity is O(n)+O(n) +O(1)= O(n)
    // time complexity is o(n)*O(n)+O(1) = O(n^2)

-> Create a distance array "d" //O(n)
-> Initialize all values of "d" to infinity
-> d[src]  = 0;
-> create a visited array and mark all nodes as unvisited;//O(n)

perform a loop
for(int i=0 to n-1)//O(1)//tc(n) outer loop

    ->> loop over the nodes and pick the "unvisited" node with lowest  d[node]//tc(N)innner
    ->> visited[node] = 1; //tc(1)
    ->> for all adj_node of node:
        - if d[node] + c(node, adj_node) < d[adj_node]:
        - d[adj_node] = d[node] + c(node, adj_node);

    output array "d";

*/
