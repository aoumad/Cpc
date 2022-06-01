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
int n, m;

int main(void)
{
    cin >> n >> m;
    vector<int> ticket_price(n);
    vector<int> max_price(n);
    for (int i = 0; i < n; i++) cin >> ticket_price[i];
    for (int i = 0; i < m; i++) cin >> max_price[i];
    sort(ticket_price.begin(), ticket_price.end());
    
}