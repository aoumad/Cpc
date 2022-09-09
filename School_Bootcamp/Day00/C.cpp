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
int n, m;

int main(void)
{
    cin >> n >> m;
    while (n != 0 && m != 0)
    {
        cout << "B" << "G";
        n--;
        m--;
    }
    while (n != 0)
    {
        cout << "B";
        n--;
    }
    while (m != 0)
    {
        cout << "G";
        m--;
    }
}