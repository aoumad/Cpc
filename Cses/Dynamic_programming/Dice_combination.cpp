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
ll n;
int main(void)
{
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
		for (ll j = 1; j <= 6; j++)
		{
			if (i < j)
				break;
			dp[i] = (dp[i] + dp[i - j]) % mod;
		}
    }
    cout << dp[n];
    return (0);
}