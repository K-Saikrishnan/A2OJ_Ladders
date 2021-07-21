// https://codeforces.com/problemset/problem/208/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    string s, original;
    int flag(1);
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!flag)
                cout << " ";
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
    }

    cout << original << endl;

    return 0;
}
