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
vector<vector<int>> adjacent(100000 + 6);
vector<bool>visited(100000 + 6, false);
int edges[100000 + 6];
int cnt[100000 + 6];
int n , m;
 
bool    bfs()
{
    queue<int> q;
    visited[1] = true;
    cnt[1] = 1;
    q.push(1);
 
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
 
        if (node == n)
            return true;
        for (int i : adjacent[node])
        {
            if (visited[i] == false)
            {
                cnt[i] = cnt[node] + 1;
                visited[i] = true;
                edges[i] = node;
                q.push(i);
            }
        }
    }
    return false;
}
 
int main(void)
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int node_1, node_2;
        cin >> node_1 >> node_2;
        adjacent[node_1].push_back(node_2);
        adjacent[node_2].push_back(node_1);
    }
 
    if (bfs())
    {
        cout << cnt[n] << endl;
 
        int path = n;
        vector<int> res;
        while (path)
        {
            res.push_back(path);
            path = edges[path];
        }
        reverse(res.begin(), res.end());
        for (int node : res)
        {
            cout << node << " ";
        }
    }
    else
        cout << "IMPOSSIBLE";
}