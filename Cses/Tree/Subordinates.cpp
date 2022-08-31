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
vector<vector <int>> arr(202020);
vector<int> subtree_subordinates(202020);

int    generator(int root)
{
    if (arr[root].size() == 0)
        return (1);
    for (int i = 0; i < arr[root].size(); i++)
    {
        subtree_subordinates[root] += generator(arr[root][i]);
    }
    return (subtree_subordinates[root] + 1);
}

int main(void)
{
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int curr_boss;
        cin >> curr_boss;
        arr[curr_boss].push_back(i);
    }
    generator(1);
    for (int i = 1; i <= n; i++)
    {
        cout << subtree_subordinates[i] << " ";
    }
}