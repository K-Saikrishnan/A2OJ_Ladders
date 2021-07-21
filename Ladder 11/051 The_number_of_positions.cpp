// https://codeforces.com/problemset/problem/124/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    cout << min(n - a, b + 1) << endl;

    return 0;
}