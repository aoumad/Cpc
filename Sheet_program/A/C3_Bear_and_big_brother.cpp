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
const int N = 1e5 + 5;
int n, m;
int more = 0;
vector<int> arr(N + 5, 0);
ll sum = 0;
int main() 
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int i = 0;
    while (n <= m)
    {
        i++;
        n *= 3;
        m *= 2;
    }
    cout << i;
   return 0;
}