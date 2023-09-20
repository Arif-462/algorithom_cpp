
-dp state: f(n,k) = number ways to make sum== k such that we dont exit the limit of each coin.

-dp recurrence: f(n,k) = f(n-1, k)+ f(n-1, k-coin[n])+f(n-1, k-2*coin[n])+
                        .......................accumulate
                        f(n-1, k- limit[n]*coin[n]);

-dp base case;
f(0,0) = 1;


time complexity : O(n*k);
