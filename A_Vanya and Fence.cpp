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
 
int n, h;
vector<int> arr(N + 5, 0);
ll sum = 0;
int main() 
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> h;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] > h)
            sum += 2;
        else
            sum += 1;
    }
    cout << sum;
   return 0;
}