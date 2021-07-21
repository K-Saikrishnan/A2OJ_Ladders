// https://codeforces.com/problemset/problem/227/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

int main()
{
    int n, m, elem;
    map<int, int> dict;
    long long Petya(0), Vasya(0);

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> elem;
        dict[elem] = i;
    }

    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        cin >> elem;
        Vasya += dict[elem] + 1;
        Petya += n - dict[elem];
    }

    cout << Vasya << " " << Petya << endl;

    return 0;
}