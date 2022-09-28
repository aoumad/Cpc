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

int main()
{
	ll n , x;
	cin >> n >> x;
	vector<ll> coins(n + 1);
	vector<ll> numberOfCoins(x + 1, INF);
	for (int i = 1; i <= n; i++)
		cin >> coins[i];
	numberOfCoins[0] = 0;
	for (int value = 1; value <= x; value++)
	{
		 for (int j = 1; j <= n; j++)
		 {
			 if (value >= coins[j])
				 numberOfCoins[value] = min(numberOfCoins[value], numberOfCoins[value - coins[j]] + 1);
		 }
	}
	cout << (numberOfCoins[x] == INF ? -1 : numberOfCoins[x]);
	return (0);
}