->state:

     knapsack(n,cap) = maximum possoble profite considering objects 1 to N and Capasity;(cap)


-> Reference Relation :


     knapsack(n, cap)  = max{(val[n] + knapsack(n-1), cap-wt[n] )//yes case

                        0 + knapsack(n-1, cap)};// NO case


-> base case:

    knapsack(0,andy-cap) = 0;




brute force time complexity: O(2^n);


dp time complexity: O(n*cap)= O(N*w)// here w is the capasity of algo
