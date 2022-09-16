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
int bag_cap;
int containers;
typedef pair<int, int> Node;
vector<Node> arr;

int main(void)
{
    cin >> bag_cap >> containers;
    for (int i = 0; i < containers; i++)
    {
        int a, b;
        cin >> a >> b;
        arr.push_back(Node(b, a));
    }
    sort(arr.begin(), arr.end(), greater<Node>());
    int res = 0;
    for (int i = 0; i < containers && bag_cap; i++)
    {
        int delta = min(arr[i].second, bag_cap);
        bag_cap -= delta;
        res += (delta * arr[i].first);
    }
    cout << res << endl;
}

// map<int, int>::iterator boxes;
// int main(void)
// {
//     cin >> nbr_boxes >> containers;
//     for (int i = 0; i < containers; i++)
//     {
//         cin >> matchboxes;
//         cin >> matches;
//         if (boxes[matches] != 0)
//             boxes[matches] += matchboxes;
//         else
//             boxes[matches] = matchboxes;
//     }
//     vector<int> keys();
//     for (auto it = map.begin(); it!= map.end(); it++)
//         keys.push_back(it->first);
//     for (int i = keys.size() - 1; i >= 0; i--)
//     {
//         if (boxes[i] < matchboxes)
//             res += (keys[i] * boxes[keys[i]]);
//         else
//             res += (keys[i] * matchboxes);
//         matchboxes -= boxes(keys[i]);
//     }
//     cout << res;
// }