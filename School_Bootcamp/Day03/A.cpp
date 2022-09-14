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
int c;
int bullshit;

int generator(ll x, ll y, ll n)
{
    if (y == 0)
        return (1);
    if (y % 2 == 0)
    {
        int nbr = generator(x, y / 2, n);
        return (nbr * nbr) % n;
    }
    else
        return (generator(x, y - 1, n) * (x % n)) % n;
}

int main(void)
{
    cin >> c;
    vector<int> arr(c);
    vector<int> res(c);
    for (int i = 0; i < c; i++)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        if (n % 2 == 0)
        {
            res[i] = generator(x, y / 2, n);
            res[i] = res[i] * res[i];
        }
        else
            res[i] = (generator(x, y - 1, n) * (x % n)) % n;
    }
    cin >> bullshit;
    for (int i = 0; i < c; i++)
        cout << res[i] << "\n";
}