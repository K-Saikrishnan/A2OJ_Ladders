// https://codeforces.com/problemset/problem/205/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, pos, flag(1);
    long long time, minTime(LONG_LONG_MAX);
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> time;
        if (time < minTime)
        {
            minTime = time;
            pos = i;
            flag = 1;
        }
        else if (time == minTime)
            flag = 0;
    }
    if (flag)
        cout << pos + 1 << endl;
    else
        cout << "Still Rozdil" << endl;

    return 0;
}