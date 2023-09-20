make"target" from n given coins

variation -2: can't take a coin more than once,
        in how many ways can we make the arget?

-dp state: f(n, target) = nuber of ways to make sum== target considering coins
            from 1 to n without repition.

-dp recursive: f(n, target) = (n-1, target) +
                f(n-1, target-coins[n])if target>= coin[n];

-base case: f(0,0) = 1;
