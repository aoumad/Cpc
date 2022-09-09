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
int n;
int  edges[1001][1001];
vector<bool>visited(INF, false);

void    dfs()

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
            cin >> edges[i][j];
    }
}