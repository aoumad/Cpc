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
int n, x;

int main(void)
{
    cin >> n >> x;
    vector<int> child_weight(n);
    for (int i = 0; i < n; i++) cin >> child_weight[i];
    sort(child_weight.begin(), child_weight.end());
    int i = 0;
    int j = n - 1;
    int cnt = 0;
    while (i <= j)
    {
        if (child_weight[i] + child_weight[j] <= x)
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            j--;
            cnt++;
        }
    }
    cout << cnt;
}