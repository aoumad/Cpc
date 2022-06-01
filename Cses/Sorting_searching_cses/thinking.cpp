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
int n;
ll x;
int cnt = 0;

int main(void)
{
    cin >> n >> x;
    ll sum = 1;
    vector<int> child_weight(n);
    for (int i = 0; i < n; i++)
    {
        cin >> child_weight[i];
        sum += child_weight[i];
    }
    double res;
    res = double(sum / x);
    
}