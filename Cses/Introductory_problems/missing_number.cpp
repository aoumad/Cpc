#include <bits/stdc++.h>
using namespace std;
 
#define int     unsigned long long int
#define oumad() ios_base::sync_with_stdio(false);cie.tie(NULL);
int sum = 0;
signed main()
{
    int n;
    cin >> n;
	sum = (n * (n + 1)) / 2;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
		sum -= x;
    }
	cout << sum;
    return (0);
}