// https://codeforces.com/problemset/problem/219/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int k, count(0);
    string s;
    char ch;
    cin >> k >> s;

    sort(s.begin(), s.begin() + s.size());

    for (int i = 0; i < s.size(); ++i)
    {
        if (i % k == 0)
            ch = s[i];
        if (s[i] == ch)
            ++count;
    }
    if (count == s.size() && count % k == 0)
    {
        for (int i = 0; i < k; i++)
            for (int l = 0; l < s.size(); l += k)
                cout << s[l];
    }
    else
        cout << "-1";

    return 0;
}