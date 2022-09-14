class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            res[i] = prefix;
            prefix *= nums[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            res[i] *= suffix;
            suffix *= nums[i];
        }
        return (res);
    }
private:
    int prefix = 1;
    int suffix = 1;
};