class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int len = prices.size();
        int profit = 0;
        int index = 0;
        for (int i = 0; i < len; i++)
        {
            if (prices[i] < prices[index])
                index = i;
            profit = max(profit, prices[i] - prices[index]);
        }
        return (profit);
    }
};