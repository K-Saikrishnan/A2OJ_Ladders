// https://codeforces.com/problemset/problem/318/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2)
        cout << k * 2 - 1 << endl;
    else
        cout << (k - (n + 1) / 2) * 2 << endl;

    return 0;
}