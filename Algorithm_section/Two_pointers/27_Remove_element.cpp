class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (val != nums[i] && k == i)
                k++;
            else if (val != nums[i] && k < i)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return (k);
    }
};