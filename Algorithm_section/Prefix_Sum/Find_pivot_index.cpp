class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        for (int i : nums)
            sum += i;
        for(int i = 0;i < nums.size(); i++)
        {
            right_sum = sum - nums[i] - left_sum;
            if (right_sum == left_sum)
                return (i);
            left_sum += nums[i];
        }
        return (-1);
    }
private:
    int sum = 0;
    int left_sum = 0;
    int right_sum = 0;
};