// https://codeforces.com/problemset/problem/144/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, element;
    cin >> n >> element;

    int minelem(element), maxelem(element), mini(0), maxi(0);

    for (int i = 1; i < n; ++i)
    {
        cin >> element;

        if (element > maxelem)
        {
            maxelem = element;
            maxi = i;
        }
        if (element <= minelem)
        {
            minelem = element;
            mini = i;
        }
    }

    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;

    return 0;
}