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
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> dp(n, vector<ll>(m + 1, 0));
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (arr[0])
        dp[0][arr[0]] = 1;
    else if (!arr[0])
        for (int i = 1; i <= m; i++)
            dp[0][i] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 1; j <= m; j++)
            {
                if (j < m)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % mod;
                if (j >= 2)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % mod;
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
            }
        }
        else
        {
            if (arr[i] >= 2)
                dp[i][arr[i]] = (dp[i][arr[i]] + dp[i - 1][arr[i] - 1]) % mod;
            if (arr[i] < m)
                dp[i][arr[i]] = (dp[i][arr[i]] + dp[i - 1][arr[i] + 1]) % mod;
            dp[i][arr[i]] = (dp[i][arr[i]] + dp[i - 1][arr[i]]) % mod;
        }
    }
    ll res = 0;
    for (int i = 1; i <= m; i++)
        res = (res + dp[n - 1][i]) % mod;
    cout << res;
    return (0);
}