// https://codeforces.com/problemset/problem/450/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, m, ai, j(0), k(0), l(0);
    queue<pair<int, int>> q;

    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> ai;
        q.push(make_pair(ai, i));
    }

    while (k < n + j)
    {
        auto front_pair = q.front();

        if (front_pair.first > m)
        {
            q.push(make_pair(front_pair.first - m, front_pair.second));
            q.pop();
            ++j;
        }
        else
        {
            l = front_pair.second + 1;
            q.pop();
        }

        ++k;
    }

    cout << l;

    return 0;
}