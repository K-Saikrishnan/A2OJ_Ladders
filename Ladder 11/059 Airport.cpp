// https://codeforces.com/problemset/problem/218/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m, minEarn(0), maxEarn(0);
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; ++i)
        cin >> a[i];

    sort(a, a + m);
    int ai(a[0]), k(0);
    for (int i = 0; i < n; ++i)
    {
        minEarn += ai;
        --ai;
        if (ai == 0)
            ai = a[++k];
    }

    sort(a, a + m, greater<int>());
    while (n--)
    {
        maxEarn += a[0];
        --a[0];
        for (int i = 1; i < m; ++i)
        {
            if (a[i] <= a[i - 1])
                break;
            swap(a[i], a[i - 1]);
        }
    }

    cout << maxEarn << " " << minEarn << endl;
    return 0;
}