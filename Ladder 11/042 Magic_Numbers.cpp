// https://codeforces.com/problemset/problem/320/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    string s;
    int flag(1);
    long long int i(0);
    cin >> s;

    while (i < s.size())
    {
        if (s[i] == '1')
        {
            if (s[i + 1] == '4' && s[i + 2] == '4')
                i += 3;
            else if (s[i + 1] == '4')
                i += 2;
            else
                ++i;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    cout << (flag == 1 ? "YES" : "NO") << endl;
    return 0;
}