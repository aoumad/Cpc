#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int n;
int res = 0;
vector<vector<int>> adjacent(202020);
vector<int> arr(202020);

int main(void)
{
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adjacent[a].push_back(b);
    }
    for (int i = 1; i <= n; i++)
    {
        if (res < adjacent[i].size())
            res = adjacent[i].size();
    }
        // res = std::max(adjacent[i].size(), res);
    cout << res;
}