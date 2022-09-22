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
char edges[100][100];
bool vertices[100][100];
string pos_x;
string pos_y;

int n, m;
char type;
int cnt = 0;

bool is_valid(int x, int y)
{
    if (x < 1 || x >= n || y < 1 || y >= m)
        return (false);
    if (vertices[x][y] == true || edges[x][y] == '.' || edges[x][y] == type)
        return (false);
    return (true);
}

void    bfs(int x, int y)
{
    vertices[x][y] = true;
    if (is_valid(x - 1, y))
    {
        cnt++;
        vertices[x - 1][y] = true;
    }
    if (is_valid(x + 1, y))
    {
        cnt++;
        vertices[x + 1][y] = true;
    }
    if (is_valid(x, y - 1))
    {
        cnt++;
        vertices[x][y - 1] = true;
    }
    if (is_valid(x , y + 1))
    {
        cnt++;
        vertices[x][y + 1] = true;
    }
}

int main(void)
{
    cin >> n >> m >> type;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> edges[i][j];
            if (edges[i][j] == type)
            {
                pos_x.push_back(i);
                pos_y.push_back(j);
            }
        }
    int k = 0;
    while (pos_x[k] && pos_y[k])
    {
        bfs((int)pos_x[k], (int)pos_y[k]);
        k++;
    }
    cout << cnt << "\n";
}