#include <bits/stdc++.h>
using namespace std;
#define int     unsigned long long int
#define oumad() ios_base::sync_with_stdio(false);cie.tie(NULL);
signed main()
{
    int n;
    cin >> n;
    string s1= "";
    if (n <= 3 && n != 1)
    {
        cout << "NO SOLUTION";
        return (0);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i %2 == 0)
        {
            cout << i << ' ';
        }
        else
            s1 += to_string(i) + ' ';
    }
    cout << s1;
    return (0);
}