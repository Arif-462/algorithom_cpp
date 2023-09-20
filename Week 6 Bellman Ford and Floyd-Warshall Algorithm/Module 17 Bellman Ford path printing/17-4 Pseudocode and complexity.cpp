

pseudocode of bellman Ford algorithm:

> input > A weighted graph and a src node (with no negative cycle) and a destination node;
>output > Shortest distance from src node to all other nodes.
///*
    u-------v

    d[u] + w < d[v // w is the edge cost of u to v;
    d[v] = d[u]+w


//


-> Create a distance array "d" with all values to infinity.//O(n)
-> Create a parent array;
-> d[src] = 0;//O(1)

-> negative_cycle = false;
-> last_updated_node = -1;

-> for i=1 to n; // O(n*m)
    - for all edge e(u,v,w);
        - if d[u]+w < d[v];//O(1)
            d[v] = d[u]+w;//O(1)
            - parent[v] = u;
            -if i == n  //O(1)
                negative_cycle = true;
                last_updated_node = v;

-> if negative_cycle == false;



     - print the distance array "d";//O(n)
     - select_node = destination_node;
     - while true;
        - declare a vector "path";
        - path.push_back(select_node); // create a vector path[N]
        - if select_node = src;
            break;
        -select_node = parent[select_node];

    - reverse the vector path
    - print the path;


-> else
    - print negative cycle exists.
    - select_node = last_updated_node;
    - for i = 1 to n-1;
        - select_node = parent[select_node];

    - declare a vector "cycle";
    - cycle.push_back(select_node)
    - while true;
        - select_node = parent[slect_node]
        - cycle.push_back(select_node);
        - if selec_node == last_updated_node;
            -break;

    - reverse the "cycle" vector;
    - print the cycle;




// time complexity is O(n^2);
O(n)+O(1)+O(n*m)+O(n) = O(n*m)
O(|v|*|E|)
O(n^2)


sc= O(n)
