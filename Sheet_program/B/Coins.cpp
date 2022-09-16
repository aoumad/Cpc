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

string s;

int main(void)
{
    map<char, int> mp;
    mp.insert(pair<char, int>('A', 0));
    mp.insert(pair<char, int>('B', 0));
    mp.insert(pair<char, int>('C', 0));
    cin >> s;
    if (s[1] == '>')
        mp[s[0]]++;
    if (s[1] == '<')
        mp[s[2]]++;
    
    cin >> s;
    if (s[1] == '>')
        mp[s[0]]++;
    if (s[1] == '<')
        mp[s[2]]++;

    cin >> s;
    if (s[1] == '>')
        mp[s[0]]++;
    if (s[1] == '<')
        mp[s[2]]++;
    
    if (mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1)
        cout << "IMPOSSIBLE";
    if (mp['A'] == 0) cout << "A";
    else if (mp['B'] == 0) cout << "B";
    else if (mp['C'] == 0) cout << "C";

    if (mp['A'] == 1) cout << "A";
    else if (mp['B'] == 1) cout << "B";
    else if (mp['C'] == 1) cout << "C";

    if (mp['A'] == 2) cout << "A";
    else if (mp['B'] == 2) cout << "B";
    else if (mp['C'] == 2) cout << "C";
}