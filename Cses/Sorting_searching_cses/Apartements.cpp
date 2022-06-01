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
#include <climits>
using namespace std;
using ll = long long;
#define INF 1e9 + 7
int n, m, k;
int main(void)
{
    cin >> n >> m >> k;
    vector<int> applicants(n);
    vector<int> apartments(m);
    for (int i = 0; i < n; i++) cin >> applicants[i];
    for (int j = 0; j < m; j++) cin >> apartments[j];
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    int i = 0;
    int j = 0;
    int cnt = 0;
    while (i < n)
    {
        while (j < m && apartments[j] < applicants[i] - k )
            j++;
        if (abs(apartments[j] - applicants[i]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else
            i++;
    }
    cout << cnt;
}