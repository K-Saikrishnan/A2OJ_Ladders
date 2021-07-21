// https://codeforces.com/problemset/problem/214/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m, count(0);
    cin >> n >> m;

    for (int a = 0; a * a <= n && a <= m; ++a)
    {
        int b = n - (a * a);
        if (a + b * b == m)
            ++count;
    }

    cout << count << endl;
    return 0;
}