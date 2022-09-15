class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n = nums.size();
        int L = 1;
        int R = 1;
        while (R < n)
        {
            if (nums[R] == nums[R - 1])
            {
                R++;
                continue;
            }
            nums[L] = nums[R];
            L++;
            R++;
        }
        return (L);
    }
};