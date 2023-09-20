

    make "target" from n given coins
    variation -1: can't take a coin more than once,
                  can we make the target?


-dp state: can we make sum == target considering coins from 1 to n without repition.

-dp recurrence: f(n, target) = f(n-1, target) or
                 f(n-1, target-coin[n]) if target >= coins[n];

- base case: f(0,0) = 1;


