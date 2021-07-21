// https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int numChildren, t;
    string s;

    cin >> numChildren >> t >> s;

    while (t--)
    {
        for (int i = 1; i < numChildren; ++i)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                ++i;
            }
        }
    }

    cout << s << endl;

    return 0;
}