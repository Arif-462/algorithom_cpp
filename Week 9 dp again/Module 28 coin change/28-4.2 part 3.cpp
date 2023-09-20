

make"target" from n given coins

variation -3: can take a coin any number of times,
                in how many ways can we make the target?

-dp state: f(n, target) = numer of ways to make sum==target considering coins 1 to n
                            with repition.


- dp recurrence: f(n, target) = f(n-1, target)+ f(n-1, target-coins[n])+ f(n-1, target-2*coin[n])+
                + f(n-1, target- 3*coion[n])

                ................................accumulate
                if(target)>= coin[n]*i f(n-1, target - i*coin[n])
-dp base case:
    f(0,0) = 1;


time complexity = (n * target)
space complexity = dp[n][target]
