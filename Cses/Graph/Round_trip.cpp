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
vector<vector<int>> adjacent(INF);
vector<bool>visited(INF);
vector<int>edges(INF);
int n, m;
int starting_location, ending_location;
vector<int>parent(INF);
 
bool dfs(int i, int mark)
{
    visited[i] = true;
    parent[i] = mark;
    for (auto j : adjacent[i])
    {
        if (j == mark)
            continue;
        if (visited[j] == true)
        {
            starting_location = j;
            ending_location   = i;
            return true;
        }
        if (visited[j] == false)
        {
            if (dfs(j, i))
                return true;
        }
    }
    return false;
}
 
bool visit_all()
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, -1))
                return true;   
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
    
    if (!visit_all())
    {
        cout << "IMPOSSIBLE" << endl;
        return (0);
    }
    
    vector<int>answer;
    int tracking_parents = ending_location;
    answer.push_back(ending_location);
    while (tracking_parents != starting_location)
    {
        answer.push_back(parent[tracking_parents]);
        tracking_parents = parent[tracking_parents];
    }
    answer.push_back(ending_location);
    cout << answer.size() << endl;
    for (auto i : answer)
    {
        cout << i << " ";
    }
}