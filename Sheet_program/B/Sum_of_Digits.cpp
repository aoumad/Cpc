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
string s;
int sum = 0;

int    solve(int nbr)
{
    int n = 0;
    while (nbr > 0)
    {
        n += nbr % 10;
        nbr /= 10;
    }
    return (n);
}

int main(int argc, char **argv)
{
    cin >> s;
    if (s.length() == 1)
    {
        cout << 0;
        return (0);
    }
    for (int i = 0; i < s.length(); i++)
        sum += (s[i] - '0');
    int res = 1;
    while (sum > 9)
    {
        sum = solve(sum);
        res++;
    }
    cout << res;
    return (0);
}