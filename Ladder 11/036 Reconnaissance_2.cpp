// https://codeforces.com/problemset/problem/34/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i, circle[n], minimal, pos1(1), pos2(n);

    for (i = 0; i < n; ++i)
        cin >> circle[i];

    minimal = abs(circle[n - 1] - circle[0]);

    for (i = 0; i < n - 1; ++i)
    {
        if (abs(circle[i + 1] - circle[i]) < minimal)
        {
            minimal = abs(circle[i] - circle[i + 1]);
            pos1 = i + 1;
            pos2 = i + 2;
        }
    }

    cout << pos1 << " " << pos2 << endl;
    return 0;
}