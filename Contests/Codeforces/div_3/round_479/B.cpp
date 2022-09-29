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
string res = "";
int max_val = 0;

int main(void)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
        mp[s.substr(i, 2)]++;
    for (auto p: mp)
    {
        if (p.second > max_val)
        {
            max_val = p.second;
            res = p.first;
        }
    }
    cout << res << "\n";
}