#include<bits/stdc++.h>
using namespace std;
/*
    graph representation:
    #####################

    Topic :  Adjancecy matrix

    0------------1
                / \
               /   \
              2 --- 3

    matrix 4*4
    total nodes = 4;
    Total edges = 4;
    *Undirected + Unweighted
    * matrix Numbers is = no of nodes * no of nodes;
    * matrix [i][j] = 1 hobe,
        if and only if(i theke ->j jawa jay using a single edge);

    0 -> 1
    1 -> 0
    1 -> 2
    2 -> 1
    2 -> 3
    3 -> 2
    3 -> 1
    1 -> 3

*/

// time complexity is O(n^2)
// Space complexity is O(n^2)

int main()
{
    const int nodes = 4;
    int matrix[nodes][nodes] = {}; // memory is n*n = n^2
        // 0(zero) assign na korle nodes k const int hisabe declare kore dite hobe.

//    for(int i=0; i<nodes; i++)
//    {
//        for(int j=0; j<nodes; j++)
//        {
//            matrix[i][j] = 0;
//        }
//    }

        //or

    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;
    matrix[3][1] = 1;
    matrix[1][3] = 1;

    //tc = n * n = O(n^2)
    for(int i=0; i<nodes; i++)//O(n)
    {
        for(int j=0; j<nodes; j++)//O(n)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
