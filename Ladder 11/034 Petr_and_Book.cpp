// https://codeforces.com/problemset/problem/139/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, i, day[7], read;
    cin >> n;

    for (i = 0; i < 7; ++i)
        cin >> day[i];

    i = 0;

    read = day[0];
    while (read < n)
    {
        i = (i + 1) % 7;
        read += day[i];
    }

    cout << i + 1 << endl;

    return 0;
}