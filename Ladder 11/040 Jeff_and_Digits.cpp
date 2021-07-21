// https://codeforces.com/problemset/problem/352/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, digit, num5(0), num0(0), i;
    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cin >> digit;
        if (digit == 5)
            ++num5;
        else
            ++num0;
    }

    if (num0 == 0)
        cout << -1 << endl;
    else if (num5 < 9)
        cout << 0 << endl;
    else
    {
        num5 -= num5 % 9;
        for (i = 0; i < num5; ++i)
            cout << 5;
        for (i = 0; i < num0; ++i)
            cout << 0;
    }

    return 0;
}