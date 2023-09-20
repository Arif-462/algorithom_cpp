#include<bits/stdc++.h>
using namespace std;
/*
    graph representation:
    #####################

    Adjacency List:

    0------------1
                / \
               /   \
              2-----3

    matrix 4*4
    total nodes = 4;
    Total edges = 4;
    *Undirected + Unweighted



    0 -> 1
    1 -> 0, 2, 3;
    2 -> 1, 3;
    3 -> 1, 2;


*/

// time complexity is O(n^2)
// Space complexity is O(n^2)

int main()
{
    int nodes = 4;
    vector<int>adj_list[nodes];//tc = O(1) //sc = O(n)

    //Tc =  O(E*2) = O(e) = O(n^2) in worst case;
    // sc = O(e*2) = O(n^2)

    adj_list[0] = {1};
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {1, 2};

    //O(n*n) = O(n^2)

    for(int i=0; i<nodes; i++)//Tc = O(n)
    {
        cout<<i<<" -> ";
        for(int j=0; j<adj_list[i].size(); j++)// tc = O(n)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

