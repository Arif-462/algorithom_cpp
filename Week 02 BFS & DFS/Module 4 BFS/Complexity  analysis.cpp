#include<bits/stdc+.h>
using namespace std;
/*
pseudo code of BFS :
    ----
    input- Connected graph and a source node
    output- Traverse all nodes and print the traversal order
    BFS(graph, source)

    ->Initiate an array called "visited" and an empty"Q"; //o(1)
    -> mark visited[source] = 1 and    q.push(source); //O(1)
    -> while the queue is not empty:
        > head = q.front()//O(1)
        > q.pop()   //O(1)       .......O(v)
        > print the node "head"
        > for all adjacent nodes of "head":
            - if visited[adj_node] = 0: then

                  -> visited[adj_node] = 1 and q.push(adj_node)

*/
int main()
{

    return 0;

}
