// https://codeforces.com/problemset/problem/34/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m, i, sum(0);
    cin >> n >> m;

    int arr[n];

    for (i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < m; ++i)
        if (arr[i] < 0)
            sum += arr[i];

    cout << abs(sum) << endl;

    return 0;
}