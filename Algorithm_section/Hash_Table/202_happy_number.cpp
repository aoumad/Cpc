class Solution {
    public:
        bool isHappy(int n)
    {
        vector<int> hash(10);
        for (int i = 0; i < 10; i++)
            hash[i] = i*i;
        while (n >= 10 || checker < 2)
        {
            checker++;
            int num = 0;
            while (n != 0)
            {
                if (n >= 10)
                    num += hash[n % 10];
                else
                    num += hash[n];
                n /= 10;
            }
            n = num;
        }
        if (n == 1)
            return (true);
        else
            return (false);
    }
private:
    unsigned int checker = 0;
};