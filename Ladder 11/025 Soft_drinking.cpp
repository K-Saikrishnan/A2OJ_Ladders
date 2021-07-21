// https://codeforces.com/problemset/problem/151/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, temp, answer;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toasts, limes, salt;

    toasts = (k * l) / nl;
    limes = c * d;
    salt = p / np;

    cout << (min(toasts, min(limes, salt))) / n << endl;

    return 0;
}