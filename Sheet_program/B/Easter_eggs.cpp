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

int n, m;
int main(int argc, char **argv)
{
    string s;int i;
    if(argc==1) ios::sync_with_stdio(false);
    FOR(i,argc-1) s+=argv[i+1],s+='\n';
    FOR(i,s.size()) ungetc(s[s.size()-1-i],stdin);

    cin >> n;
    m = n % 7;
    while (n >= 7)
    {
        cout << "ROYGBIV";
        n = n - 7;
    }
    string str = "ROYGBIV";
    for (int i = 0; i < m; i++)
    {
        if (i == m - 1 && str[i] == 82)
        {
            cout << str[i + 3];
            continue;
        }\0
        cout << str[i++];
    }
    return (0);
}