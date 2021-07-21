// https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, ai, bi, capacity(0), current(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ai >> bi;
        current += (bi - ai);
        capacity = max(capacity, current);
    }

    cout << capacity << endl;
    return 0;
}