// https://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string s3(s1);
    for (int i = 0; i < s1.size(); ++i)
        s3[i] = (s1[i] == s2[i] ? '0' : '1');

    cout << s3 << endl;

    return 0;
}