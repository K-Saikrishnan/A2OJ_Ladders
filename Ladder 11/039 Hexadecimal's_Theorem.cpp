// https://codeforces.com/problemset/problem/199/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, i, j, flag(0), x, arr[46];
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;

    for (i = 2; i < 46; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    for (i = 0; 2 * arr[i] <= n; ++i)
    {
        x = arr[i];
        if (binary_search(arr, arr + 46, n - x))
        {
            flag = 1;
            cout << 0 << " " << x << " " << n - x;
            break;
        }
    }

    if (!flag)
        cout << "I'm too stupid to solve this problem" << endl;

    return 0;
}