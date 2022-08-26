class Solution {
    int flag = 1;
public:
    
    double  calcul(double x, int n)
    {
        if (n == 0)
            return (1);
        double  res = calcul(x, n / 2);
        if ((n & 1) == 0)
            return (res * res);
        else
            return (res * res * x);
        
    }
    double myPow(double x, int n)
    {
        double rtn = calcul(x, abs(n));
        if (n < 0)
            rtn = (1 / rtn);
        return (rtn);
    }
};