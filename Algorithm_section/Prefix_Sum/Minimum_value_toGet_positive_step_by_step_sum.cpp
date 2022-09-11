class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        int min = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum+= nums[i];
            min = min < sum ? min: sum;
        }
        return (1 + abs(min));
    }
};