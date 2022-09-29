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

int main(void)
{
    int k;
    string s;
    cin >> s >> k;
    int n = s.size();
    while (k--)
    {
        if (s[n - 1] == '0')
        {
            s.pop_back();
            n = s.size();
        }
        else
            s[n - 1] -= 1;;
    }
    cout << s << "\n";
}