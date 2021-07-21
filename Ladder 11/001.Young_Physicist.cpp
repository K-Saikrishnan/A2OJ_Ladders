// https://codeforces.com/problemset/problem/69/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int numForces, xi, yi, zi, xsum(0), ysum(0), zsum(0);
    cin >> numForces;

    for (int i = 0; i < numForces; ++i)
    {
        cin >> xi >> yi >> zi;
        xsum += xi;
        ysum += yi;
        zsum += zi;
    }

    if (!xsum && !ysum && !zsum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}