#include <bits/stdc++.h>
using namespace std;
 
#define int     unsigned long long int
#define oumad() ios_base::sync_with_stdio(false);cie.tie(NULL);
signed main()
{
    string s;
    cin >> s;
    int res = 1;
    int cnt = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
            cnt = 1;
        res = max(res, cnt);
    }
    cout << res;
    return (0);
}