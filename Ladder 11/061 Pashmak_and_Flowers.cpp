// https://codeforces.com/problemset/problem/459/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{

    long long n, maxCount(0), minCount(0), beauty, minBeauty(INT_MAX), maxBeauty(INT_MIN);
    cin >> n;

    for (auto i = 0; i < n; i++)
    {
        cin >> beauty;
        if (beauty > maxBeauty)
            maxBeauty = beauty, maxCount = 1;
        else if (beauty == maxBeauty)
            maxCount++;

        if (beauty < minBeauty)
            minBeauty = beauty, minCount = 1;
        else if (beauty == minBeauty)
            minCount++;
    }

    if (maxBeauty == minBeauty)
        cout << maxBeauty - minBeauty << " " << (n * (n - 1) / 2);
    else
        cout << maxBeauty - minBeauty << " " << minCount * maxCount;

    return 0;
}