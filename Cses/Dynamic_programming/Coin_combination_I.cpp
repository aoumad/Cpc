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
	ll n, x;
	cin >> n >> x;
	vector<ll> coins(n + 1);
	vector<ll> dp(x + 1, 0);
	dp[0] = 1;
	for (ll i = 1; i <= n; i++)
		cin >> coins[i];
	for (ll value = 1; value <= x; value++)
	{
		 for (ll j = 1; j <= n; j++)
		 {
			 if (value >= coins[j])
				dp[value] = (dp[value] + dp[value - coins[j]]) % mod;
		 }
	}
	cout << dp[x];
	return (0);
}