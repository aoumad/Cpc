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
    ll n;
    cin >> n;
    vector<ll> dp(n + 1, INF);
    dp[0] = 0;
    for (ll value = 1; value <= n; value++)
    {
        int tmpvalue = value;
        while (tmpvalue > 0)
        {
            dp[value] = min(dp[value], dp[value - (tmpvalue % 10)] + 1);
            tmpvalue /= 10;
        }
    }
    cout << dp[n];
    return (0);
}