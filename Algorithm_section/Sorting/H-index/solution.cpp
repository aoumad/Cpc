// time complexity of O(NlogN)
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    private:
        int _hIndex;
    public:
        int hIndex(vector<int> &citations)
        {
            _hIndex = 0;
            sort(citations.begin(), citations.end(), greater<int>());
            for (int i = 0; i < citations.size(); i++)
            {
                if (citations[i] >= _hIndex + 1)
                    _hIndex++;
                else
                    break;
            }
            return (_hIndex);
        }
};

int main(void)
{
    Solution s;
    vector<int> citations;
    citations.push_back(3);
    citations.push_back(0);
    citations.push_back(6);
    citations.push_back(1);
    citations.push_back(5);
    cout << s.hIndex(citations) << endl;
    return (0);
}