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
char edges[1001][1001];
bool vertices[1001][1001];
int n, m;
int x, y;
bool is_valid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y  > m)
        return false;
    if (vertices[x][y] == true || edges[x][y] == '#')
        return false;
    return true;
}
 
void    dfs(int x, int y)
{
    vertices[x][y] = true;
 
    if (is_valid(x - 1, y))
        dfs(x - 1 , y);
    if (is_valid(x, y - 1))
        dfs(x, y - 1);
    if (is_valid(x + 1, y))
        dfs(x + 1, y);
    if (is_valid(x, y + 1))
        dfs(x, y + 1);
}
 
int main(void)
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> edges[i][j];
    
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (edges[i][j] == '.' && vertices[i][j] == false)
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    
    cout << cnt;
}