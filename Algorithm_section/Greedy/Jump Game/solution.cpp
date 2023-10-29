#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
        bool    canJump(vector<int> &nums)
        {
            unsigned int maxJump = 0;
            for (unsigned int i = 0; i < nums.size(); i++)
            {
                if (i > maxJump)
                    return false;
                maxJump = maxJump > (i + nums[i]) ? maxJump : (i + nums[i]);
            }
            return true;
        }
};

int main()          // 2 3 1 1 4
{
    Solution sol;
    std::vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(4);
    cout << ((sol.canJump(nums) == 1) ? "true" : "false") << endl;
    return 0;
}