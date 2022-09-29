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
    unsigned long n, k;
    cin >> n >> k;
    vector<unsigned long> arr(n + 1);
    for (unsigned long i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    if (k == 0 && arr[1] > 1)
    {
        cout << "1" << "\n";
        return (0);
    }
    if (k == 0 && arr[1] == 1)
    {
        cout << "-1" << "\n";
        return (0);
    }
    if (k < n)
    {
        if (arr[k] == arr[k + 1])
        {
            cout << "-1" << "\n";
            return (0);
        }
    }
    cout << arr[k] << "\n";
    return (0);
}