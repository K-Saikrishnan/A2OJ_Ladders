// https://codeforces.com/problemset/problem/230/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int s, n, strength, bonus;
    bool won = true;
    cin >> s >> n;

    vector<pair<int, int>> dragons;

    for (int i = 0; i < n; ++i)
    {
        cin >> strength >> bonus;
        dragons.push_back(make_pair(strength, bonus));
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; ++i)
    {
        if (s <= dragons[i].first)
        {
            won = false;
            break;
        }
        else
            s += dragons[i].second;
    }
    cout << (won == true ? "YES" : "NO") << endl;
    return 0;
}