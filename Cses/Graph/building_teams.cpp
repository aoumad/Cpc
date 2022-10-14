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
#include <climits>
using namespace std;
using ll = long long;
#define INF 1000007
vector <vector<int>> adjacent(INF);
int color[INF];
bool visited[INF];
 
bool    dfs(int node, int c)
{
    visited[node] = true;
    color[node] = c;
 
    for (int i : adjacent[node])
    {
        if (visited[i] == false)
        {
            bool res = dfs(i, c ^ 1);
            if (res == false)
                return false;
        }
        else
        {
            if (color[i] == color[node])
                return false;
        }
    }
    return true;
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int node_1, node_2;
        cin >> node_1 >> node_2;
        adjacent[node_1].push_back(node_2);
        adjacent[node_2].push_back(node_1);
    }
 
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            flag = dfs(i, 0);
            if (flag == false)
                break;
        }
    }
    if (!flag)
        cout << "IMPOSSIBLE";
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << color[i] + 1 << " ";
        }
    }
}