
??Link :https://leetcode.com/problems/unique-paths/


    state:
    in how may ways canbe reach in cell n,m


    recursive formula:
    fun(n,m) = fun(n-1, m) + fun(n, m-1);

    base case:
    if(n,m) = 0 retur 1;


    time codplexity is O(n*m)
    space complexity is O(n*m)
