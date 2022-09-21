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

int n, k;
int t = INT_MAX;
int pos;
int main(void)
{
    cin >> n >> k;
    vector<int> arr;
    arr.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        int nbr;
        cin >> nbr;
        arr.push_back(arr.back() + nbr);
    }
    for (int i = k ; i <= n; i++)
    {
        if (t > arr[i] - arr[i - k])
        {
            t = arr[i] - arr[i - k];
            pos = i;
        }
    }
    cout << pos - k + 1;
}