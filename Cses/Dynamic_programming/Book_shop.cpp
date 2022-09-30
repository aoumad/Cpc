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
int main()
{
	ll books, totalPrice;
	cin >> books >> totalPrice;
	vector<ll> priceOfBooks(books);
	vector<ll> pagesOfBooks(books);
	for (ll i = 0; i < books; i++)
		cin >> priceOfBooks[i];
	for (ll i = 0; i < books; i++)
		cin >> pagesOfBooks[i];
	//vector<vector<ll>> dp(books+10, vector<ll>(totalPrice+10, 0));
	vector<ll> current(totalPrice+1, 0);
	vector<ll> prev(totalPrice+1, 0);
	for (ll i = 0; i < books; i++)
	{
		for (ll currentPrice = 0; currentPrice <= totalPrice; currentPrice++)
		{
			if (currentPrice >= priceOfBooks[i])
			{
				//dp[i+1][currentPrice] = max(dp[i][currentPrice], dp[i][currentPrice - priceOfBooks[i]] + pagesOfBooks[i]);
				current[currentPrice] = max(prev[currentPrice], prev[currentPrice-priceOfBooks[i]] + pagesOfBooks[i]);
			}
			else
			{
				//dp[i+1][currentPrice] = dp[i][currentPrice];
				current[currentPrice] = prev[currentPrice];
			}
		}
		prev = current;
	}
	cout << prev[totalPrice];
	return (0);
}