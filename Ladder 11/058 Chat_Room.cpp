// https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    string s, w = "hello";
    cin >> s;

    int count(0);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == w[count])
            ++count;
        if (count == 5)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}