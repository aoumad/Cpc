class Solution {
public:
    int res = 0;
    int arr[38];
    int tribonacci(int n) 
    {
        if (n <= 0)
            return (0);
        if (arr[n])
            return (arr[n]);
        if (n == 1 || n == 2)
            return (1);
        else
            res = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
        arr[n] = res;
        return (res);
    }
};