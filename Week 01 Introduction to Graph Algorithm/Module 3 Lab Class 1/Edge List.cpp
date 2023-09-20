#include<bits/stdc++.h>
using namespace std;
/*
    Graph:
    0------1
          /  \
         /    \
        2------3


    Edges is:
    [0, 1]
    [1, 2]
    [1, 3]
    [2, 3]

    jodi edge weighted hoy
    [0, 1, 2]
    [1, 2, 4]
    [1, 3, 9]
    [2, 3, 1]
*/


int main()
{
   int nodes = 4;
    vector<vector<int>>edge_list ;//= {{0, 1},{1, 2},{1, 3},{2, 3}};//alada push back kora lagbe na.
    //vector<pair<int, int>>edge_list ;

    //Unweighted edge

//    edge_list.push_back({0, 1});
//    edge_list.push_back({1, 2});
//    edge_list.push_back({1, 3});
//    edge_list.push_back({2, 3});


    //weighted edge

    edge_list.push_back({0, 1, 2});
    edge_list.push_back({1, 2, 4});
    edge_list.push_back({1, 3, 9});
    edge_list.push_back({2, 3, 1});


    //vector declare kore print kora jay
    for(int i=0; i<edge_list.size(); i++)
    {
       cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<" >> "<<edge_list[i][2]<<endl;
    }

    //pair use kore itaretor dia print kora jay
    for(auto it:edge_list)
    {
        //cout<<it.first<<" "<<it.second<<" > "<<it.second.first<<"\n";
    }

    return 0;
}
