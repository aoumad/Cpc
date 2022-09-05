class Solution {
public:
    int res = 0;
    
    int generator(int index, vector<int> cost, vector<int>& dp)
    {
        if (index == 0)
            return (cost[index]);
        if (index == 1)
            return (cost[index]);
        if (dp[index] != -1)
            return (dp[index]);
        dp[index] = min(generator(index - 1, cost, dp) + cost[index],
                        generator(index - 2, cost, dp) + cost[index]);
        return (dp[index]);
    }
    
    int minCostClimbingStairs(vector<int>& cost)
    {
        int index = cost.size();
        vector<int> dp(index + 5, -1);
        res = min(generator(index - 1, cost, dp), generator(index - 2, cost, dp));
        return (res);
    }
};