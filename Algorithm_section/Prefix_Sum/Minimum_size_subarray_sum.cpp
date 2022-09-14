class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int res = INT_MAX;
        int L = 0, R = 0;
        int sum = 0;
        while (R < nums.size())
        {
            sum += nums[R];
            while (sum >= target)
            {
                res = min(res, R - L + 1);
                sum -= nums[L];
                L++;
            }
            R++;
        }
        return res == INT_MAX ? 0 : res;
    }
};