// https://codeforces.com/problemset/problem/352/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, x, y, i, j, k;

    map<int, vector<int>> mp;

    cin >> n;
    for (i = 0; i < n; ++i)
    {
        cin >> x;
        mp[x].push_back[i];
    }

    vector<pair<int, int>> v;
    map<int, vector<int, int>>::iterator p = mp.begin();

    while (p != mp.end())
    {
        k = p->first;

        if (mp[k].size() == 1)
            v.push_back({k, 0});
        else
        {
            set<int> s;
            for (i = 1; i < mp[k].size(); ++i)
                s.insert(abs(mp[k][i] - mp[k][i - 1]));

            set<ll>::iterator q = s.begin();
            if (s.size() == 1)
                v.push_back({k, *q});
        }
        ++p;
    }

    cout << v.size() << endl;
    for (i = 0; i < v.size(); ++i)
        cout << v[i].first << " " << v[i].second << endl;

    return 0;
}