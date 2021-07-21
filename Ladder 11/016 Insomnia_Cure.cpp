// https://codeforces.com/problemset/problem/148/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int k, l, m, n, d, damaged;

    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
        cout << d << endl;
    else
    {
        damaged = d;
        for (int i = 1; i <= d; ++i)
            if ((i % k != 0) && (i % l) != 0 && (i % m != 0) && (i % n != 0))
                damaged--;

        cout << damaged << endl;
    }

    return 0;
}