// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); ++i)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;

        if (s1[i] > s2[i])
        {
            cout << "1";
            return 0;
        }
        else if (s1[i] < s2[i])
        {
            cout << "-1";
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}