#include <bits/stdc++.h>
using namespace std;
 
#define int     unsigned long long int
#define oumad() ios_base::sync_with_stdio(false);cie.tie(NULL);
signed main()
{
    int n;
    cin >> n;
    int arr[n + 5];
    int cnt = 0;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        while (arr[i] < arr[i - 1])
        {
            arr[i] += 1;
            cnt++;
        }
    }
    cout << cnt;
    return (0);
}