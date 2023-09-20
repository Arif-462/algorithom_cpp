

//https://atcoder.jp/contests/dp/tasks/dp_a

Stone(n) = Minimum cost to reach n th Stone

    Stone(8) = Stone(6)+|h8 - h6|// 2 jump to reach stone 8 or
                Stone(7)+ |h8 - h7|


-> Generic Formula :
        Stone(n) = Stone(n-1) + abs(h[n] - h[n-1]);
                    Stone(n-2) + abs(h[n]- h[n-2]);
