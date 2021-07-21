// https://codeforces.com/problemset/problem/337/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m, minDiff(INT_MAX);
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; ++i)
        cin >> arr[i];

    sort(arr, arr + m);

    for (int i = 0; i <= m - n; ++i)
        minDiff = min(minDiff, arr[i + n - 1] - arr[i]);

    cout << minDiff << endl;
    return 0;
}