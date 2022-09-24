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

char s[100007];
int main(void)
{
    scanf("%s", s);
    int size = strlen(s);
    for (int i = 0; i < size; i++)
        printf("%c", s[i]);
    for (int i = size - 1; i >= 0; i--)
        printf("%c", s[i]);
    return (0);
}