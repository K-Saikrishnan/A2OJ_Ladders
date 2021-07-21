// https://codeforces.com/problemset/problem/339/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m, now, loc(1);
    cin >> n >> m;

    long long int ans = 0;

    for (int i = 0; i < m; ++i)
    {
        cin >> now;
        ans += (now - loc + n) % n;
        loc = now;
    }

    cout << ans << endl;

    return 0;
}