// https://codeforces.com/problemset/problem/165/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, i, j, count(0);
    int l, r, u, d, x, x1, y, y1;
    cin >> n;
    int arr[n][2];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> arr[i][j];

    for (i = 0; i < n; ++i)
    {
        x = arr[i][0];
        y = arr[i][1];

        l = r = u = d = 0;

        for (j = 0; j < n; ++j)
        {
            x1 = arr[j][0];
            y1 = arr[j][1];

            if (y1 == y)
            {
                if (x1 > x)
                    ++r;
                else if (x1 < x)
                    ++l;
            }

            else if (x1 == x)
            {
                if (y1 > y)
                    ++u;
                else if (y1 < y)
                    ++d;
            }
        }
        if (l && r && u && d)
            ++count;
    }

    cout << count << endl;

    return 0;
}