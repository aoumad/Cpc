//memoization method 

class Solution {
public:
    int res = 0;
    int arr[202020];
    int fib(int n) 
    {
        if (n < 1)
            return (0);
        if (arr[n])
            return (arr[n]);
        if (n == 1 || n == 2)
            return (1);
        else
            res = fib(n - 1) + fib(n - 2);
        arr[n] = res;
        return (res);
    }
};