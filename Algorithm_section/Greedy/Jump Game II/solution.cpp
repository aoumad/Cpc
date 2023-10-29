#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
        int jump(vector<int>& nums)
        {
            int step = 0;
            int last = 0;
            int curr = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (i > last)
                {
                    last = curr;
                    step++;
                }
                curr = max(curr, i + nums[i]);
            }
            return step;
        }
};
// 2 3 1 1 4

int main()
{
    Solution sol;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(4);
    cout << sol.jump(nums) << endl;
}