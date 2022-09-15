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
ll y, res = 1;;
int n = 1e9 + 7;
int x = 3;

int main(void)
{
    cin >> y;
    while (y > 0)
    {
        if (y % 2 == 1)
            res = (res * x) % n;
        x = (x *x) % n;
        y /= 2; 
    }
    cout << (res % n) << "\n";
}