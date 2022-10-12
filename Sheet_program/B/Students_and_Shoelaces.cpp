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
#include <list>
#include <iterator>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <climits>
using namespace std;
using ll = long long;
vector<set<int>> adjacent(100000 + 5);
int total = 0;
int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adjacent[a].insert(b);
        adjacent[b].insert(a);
    }
    while (1)
    {
        vector<int> res;
        for (int i = 1; i <= n; i++)
        {
            if (adjacent[i].size() == 1)
                res.push_back(i);
        }
        for (int i = 0; i < (int)res.size(); i++)
        {
            set<int>:: iterator itr = adjacent[res[i]].begin();
            adjacent[res[i]].clear();
            adjacent[ *itr].erase(res[i]);
        }
        if (res.size())
            total++;
        else
            break;
    }
    cout << total << std::endl;
    return (0);
}