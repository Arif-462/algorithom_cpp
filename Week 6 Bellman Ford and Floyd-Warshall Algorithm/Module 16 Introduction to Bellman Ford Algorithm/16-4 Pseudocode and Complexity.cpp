

pseudocode of bellman Ford algorithm:

> input > A weighted graph and a src node (with no negative cycle).
>output > Shortest distance from src node to all other nodes.
/*
    u-------v

    d[u] + w < d[v // w is the edge cost of u to v;
    d[v] = d[u]+w


*/


-> Create a distance array "d" with all values to infinity.//O(n)
-> d[src] = 0;//O(1)

-> for i=1 to n-1; // O(n*m)
    - for all edge e(u,v,w);
        - if d[u]+w < d[v];//O(1)
            d[v] = d[u]+w;//O(1)

-> Finally print the distance array "d"; //O(n)

// time complexity is O(n^2);
O(n)+O(1)+O(n*m)+O(n)
O(|v|*|E|)
O(n^2)


sc= O(n)
