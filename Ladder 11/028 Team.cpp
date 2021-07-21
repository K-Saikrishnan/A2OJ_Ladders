// https://codeforces.com/problemset/problem/231/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, t1, t2, t3, count(0);
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> t1 >> t2 >> t3;
        if (t1 + t2 + t3 >= 2)
            ++count;
    }

    cout << count << endl;

    return 0;
}