// https://codeforces.com/problemset/problem/43/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, goal(0), t1Goals(0), t2Goals(0);
    string team, team1, team2;

    cin >> n;

    cin >> team1;
    ++t1Goals;

    for (int i = 1; i < n; ++i)
    {
        cin >> team;
        if (team == team1)
            ++t1Goals;
        else
        {
            team2 = team;
            ++t2Goals;
        }
    }

    cout << (t1Goals > t2Goals ? team1 : team2) << endl;

    return 0;
}