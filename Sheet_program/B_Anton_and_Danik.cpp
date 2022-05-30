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
//char    greeting[n] 
int n;
int more = 0;
vector<int> arr(N + 5, 0);
ll sum = 0;
int main() 
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    char    str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        if (str[i] == 'A')
            more++;
        else
            more--;
    }
    if (more > 0)
        cout << "Anton";
    else if (more < 0)
        cout << "Danik";
    else
        cout << "Friendship";
   return 0;
}