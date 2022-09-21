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
#include <list>
#include <iterator>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <climits>
using namespace std;
using ll = long long;

int n, m;

int main(void)
{
    cin >> n;
    vector<ll> costs, str(n), u_costs;
    int num; cin >> num;
    costs.push_back(num);
    str[0] = num;
    ll nbr;
    for (int i = 1; i < n; i++)
    {
        cin >> nbr;
        str[i] = nbr;
        costs.push_back(costs.back() + nbr);
    }
    sort(str.begin(), str.end());
    u_costs.push_back(str[0]);
    for (int i = 1; i < n; i++)
    {
        u_costs.push_back(u_costs.back() + str[i]);
    }
    cin >> m;
    vector<ll> res(m);
    for (int i = 0; i < m; i++)
    {
        int L, R, type;
        cin >> type >> L >> R;
        if (L == 1 && type == 1)
            res[i] = costs[R - 1];
        if (L == 1 && type == 2)
            res[i] = u_costs[R - 1];
        if (type == 1 && L != 1)
            res[i] = costs[R - 1] - costs[L - 2];
        if (type == 2 && L != 1)
            res[i] = u_costs[R - 1] - u_costs[L - 2];
    }
    for (int i = 0; i < m; i++)
        cout << res[i] << "\n";
}