// https://codeforces.com/problemset/problem/224/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z;

    a = sqrt((x * y) / z);
    b = sqrt((x * z) / y);
    c = sqrt((y * z) / x);

    cout << (a + b + c) * 4 << endl;

    return 0;
}