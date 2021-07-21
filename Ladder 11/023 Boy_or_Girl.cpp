// https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    string s;
    int count(0);
    set<int> hash;

    cin >> s;

    for (int i = 0; i < s.size(); ++i)
        if (hash.find(s[i]) == hash.end())
        {
            hash.insert(s[i]);
            ++count;
        }

    cout << (count % 2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}