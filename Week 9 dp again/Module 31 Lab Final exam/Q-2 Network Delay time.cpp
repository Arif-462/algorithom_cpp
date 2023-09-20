//https://leetcode.com/problems/network-delay-time/

#include<bits/stdc++.h>
using namespace std;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    const int N = 1e5+5;
    vector<vector<pair<int,int>>>adj_list(N);
    for(int i=0; i<times.size(); i++)
    {
        adj_list[times[i][0]].push_back({times[i][1], times[i][2]});
    }


    priority_queue<pair<int, int>> pq;
    vector<int> dst(N);
    const int INF = 1e9;
    for(int i=0; i<dst.size(); i++)
    {
        dst[i] = INF;
    }

    pq.push({0, k});
    dst[k] = 0;

    while (!pq.empty()) {
        int currNode = pq.top().second;
        int currTime = pq.top().first;
        pq.pop();


        for (auto selected : adj_list[currNode]) {
            int next_Node = selected.first;
            int nexT_time = selected.second;


            if (dst[currNode] + nexT_time < dst[next_Node]) {
                dst[next_Node] = dst[currNode] + nexT_time;
                pq.push({dst[next_Node], next_Node});
            }
        }
    }


    int need_time = 0;
    for (int i = 1; i <= n; ++i) {
        if (dst[i] == INF) {

            return -1;
        }
        need_time = max(need_time, dst[i]);
    }

    return need_time;
}

int main() {
    vector<vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    int n = 4;
    int k = 2;

    cout  << networkDelayTime(times, n, k) << endl;

    return 0;
}
