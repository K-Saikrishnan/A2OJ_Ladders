// https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int numStones, i, count = 0;
    string s;

    cin >> numStones >> s;

    for (i = 0; i < numStones - 1; ++i)
    {
        if (s[i] == s[i + 1])
            ++count;
    }

    cout << count << endl;

    return 0;
}