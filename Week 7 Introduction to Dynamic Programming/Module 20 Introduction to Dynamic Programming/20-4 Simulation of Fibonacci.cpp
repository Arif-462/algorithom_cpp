
Number - 1:

int fib(int n)// O(2^n)
{
    if(n <= 2) return 1;

    return fib(n-1) + fib(n-2);
}












Number - 2:

int fun(int n)// Time complexity is O(n);
{
    if(n <= 2) return 1;
    return fun(n-1);
}

