



-fun(n, target) = fun(n-1, target - nums[n])
                    fun(n-1, target + nums[n]);

- if(target==0)
    return 1;
