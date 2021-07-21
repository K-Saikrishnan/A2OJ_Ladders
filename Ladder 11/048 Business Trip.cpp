// https://codeforces.com/problemset/problem/149/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int k, growth[12], totalGrowth(0);
    cin >> k;

    for (int i = 0; i < 12; ++i)
    {
        cin >> growth[i];
        totalGrowth += growth[i];
    }

    if (totalGrowth < k)
        cout << -1 << endl;

    else
    {
        sort(growth, growth + 12, greater<int>());
        int sum(0), minMonths(0);
        while (sum < k)
        {
            sum += growth[minMonths];
            ++minMonths;
        }

        cout << minMonths << endl;
    }

    return 0;
}