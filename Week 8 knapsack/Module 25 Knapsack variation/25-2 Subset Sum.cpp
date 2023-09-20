
subset:
[3,34,4,12,5,2]     target = 9;

fun(n, target) -> fun(n-1, target);
                -> fun(n-1, target-num[n]);


base-> fun(0, target) if taget is 0 return 1;


time coplexity in dp:O(n*target)
brut force time complexity : O(2^n);


space complexity : O(n);
