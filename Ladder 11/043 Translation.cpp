// https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    reverse(t.begin(), t.end());

    cout << (s == t ? "YES" : "NO") << endl;

    return 0;
}