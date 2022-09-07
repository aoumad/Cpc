// Hashing Method (NOT EFFICIENT IN THIS CASE)
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
vector<int> res(100, 0);
int sum = 0;

int main()
{
    cin >> n;
    vector<int> arr1(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        res[arr1[i]] += 1;
    }
    cin >> m;
    vector<int> arr2(m + 1);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        if (res[arr2[i]] != 0)
            res[arr2[i]] = 0;
    }
    for (int i = 0; i < 100; i++)
    {
        if (res[i] != 0)
        {
            int j = res[i];
            while (j--)
                sum++;
        }
    }
    cout << sum << "\n";
    for (int i = 0; i < n; i++)
    {
        if (res[arr1[i]])
            cout << arr1[i] << " ";
    }
    return 0;
}

// set method (more efficient)

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
set<int> s;
int sum = 0;
vector<int> res;

int main()
{
    cin >> n;
    vector<int> arr1(n + 1);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int nbr;
        cin >> nbr;
        s.insert(nbr);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr1[i]) == s.end())
        {
            sum++;
            res.push_back(arr1[i]);
        }
    }
    cout << sum << "\n";
    for (int i = 0; i < sum; i++)
    {
        cout << res[i] << " ";
    }
    return (0);
}