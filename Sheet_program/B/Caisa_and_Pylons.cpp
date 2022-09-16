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

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define FOR(x,to) for(x=0;x<to;x++)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))

int n;
int main(int argc, char **argv)
{
    string s;int i;
    if(argc==1) ios::sync_with_stdio(false);
    FOR(i,argc-1) s+=argv[i+1],s+='\n';
    FOR(i,s.size()) ungetc(s[s.size()-1-i],stdin);
    cin >> n;
    vector<int> arr(n);
    arr[0] = 0;
    int res = 0;
    for (int i = 1; i <= n ; i++)
    {
        cin >> arr[i];
        res = max(res, arr[i]);
    }
    cout << res << endl;
    return (0);
}