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
const ll mod = 1e9 + 7;
const ll INF = 1e9;
int main(void)
{
    int n;
    cin >> n;
    string s;
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] != '*')
            {
                if (i > 0)
                {
                    dp[i][j] += dp[i - 1][j];
                    dp[i][j] %= mod;
                }
                if (j > 0)
                {
                    dp[i][j] += dp[i][j - 1];
                    dp[i][j] %= mod;
                }
            }
            else
                dp[i][j] = 0;
        }
    }
    cout << (n> 0 ? dp[n - 1][n - 1] : -1);
    return (0);
}