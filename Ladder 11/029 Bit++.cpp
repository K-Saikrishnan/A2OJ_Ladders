// https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, result, x(0);
    string s;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if (s == "++X" or s == "X++")
            ++x;
        else
            --x;
    }

    cout << x << endl;

    return 0;
}