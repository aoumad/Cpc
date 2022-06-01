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
set<int> values;
int value;

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> value;
        values.insert(value);
    }
    cout << values.size();
}