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

#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626433832795
#define sqr(x) (x)*(x)
#define forn(i, n) for(int i = 0; i < n; ++i)
#define ALL(x) x.begin(), x.end()
#define sz(x) int((x).size())
#define X first
#define Y second
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;
typedef pair<int,int> pii;
const int INF = 2147483647;
const ll LLINF = 9223372036854775807LL;

ll n;
int main(void)
{
    cin >> n;
    vector<ll> arr(n + 5);
    forn(i, n) cin >> arr[i];
	vector<ll> sorted = arr;
	sort(ALL(sorted));
	int l = n;
	int r = -1;
	forn(i, n) if (arr[i] != sorted[i]) {
		l = min(l, i);
		r = max(r, i);
	}
	if (l == n) l = 0, r = 0;
	reverse(arr.begin()+l,arr.begin()+r+1);
	if (arr == sorted) printf("yes\n%d %d\n", l+1,r+1);
    else cout << "No\n";
    return (0);
}