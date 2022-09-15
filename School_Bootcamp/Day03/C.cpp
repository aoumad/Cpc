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
int n, m;

int main(void)
{
    cin >> n;
    vector<int> arr(n, -1);
    for (int i = 0; i < n; i++)
    {
        int nbr;
        cin >> nbr;
        arr[nbr] = 1;
    }
    cin >> m;
    vector<string> res(m);
    for (int i = 0; i < m; i++)
    {
        int nb;
        cin >> nb;
        if (arr[nb] != -1)
            res.push_back("Yes");
        else
            res.push_back("No");
    }
    for (int i = 0; i < res.length(); i++)
        cout << res[i] << "\n";
    return (0);
}