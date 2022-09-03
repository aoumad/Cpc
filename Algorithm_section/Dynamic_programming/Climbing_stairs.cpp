//Memoization method 100% faster

class Solution {
public:
    int res = 0;
    int arr[46];
    int climbStairs(int n) 
    {
        if (n <= 0)
            return (0);
        if (arr[n])
            return (arr[n]);
        if (n == 1 || n == 2)
            return (n);
        else
            res = climbStairs(n - 1) + climbStairs(n - 2);
        arr[n] = res;
        return (res);
    }
};

// DP- Bottom-up approach + using two variables to avoid O(n) space complexity of the whole array 
//i wanna try swapping between the two variables without a temp variable
/* This is the logic of it: 
        X= 25 (First number), Y= 23 (second number)
        Swapping Logic:
        X = X + Y = 25 +23 = 48
        Y = X - Y = 48 - 23 = 25
        X = X -Y = 48 - 25 = 23
        and the numbers are swapped as X =23 and Y =25.
    So my space complexity in this case is constant so i avoided space limit issue in big cases
*/

class Solution {
public:
    int climbStairs(int n) 
    {
        int x = 1;
        int y = 1;
        
        if (n < 0)
            return (0);
        
        for (int i = n; i <= 1; i--)
        {
            x = x  + y;
            y = x - y;
            x = x - y;
        }
        return (x);
    }
};