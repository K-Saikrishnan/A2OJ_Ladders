// https://codeforces.com/problemset/problem/215/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m, b, max(0), count(1);
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> b;
        for (int j = 0; j < n; ++j)
        {
            if (b % a[j] == 0)
            {
                int x = b / a[j];
                if (x > max)
                {
                    max = x;
                    count = 1;
                }
                else if (x == max)
                    ++count;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}