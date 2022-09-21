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

string str;
string res;
int n;
int main(int argc, char **argv)
{
    cin >> n;
    cin >> str;
    string t = str;
    int it = 0;
    if (n % 2 == 1)
        t[(n + 1) / 2 - 1] = str[0], it++;
    int f = n /2;
    int e = (n / 2) + 1;
    if (n % 2 == 1)
        e++;
    while (f >= 1)
    {
        t[f - 1] = str[it++];
        t[e - 1] = str[it++];
        f--;
        e++;
    }
    cout << t << "\n";
}