// https://codeforces.com/problemset/problem/141/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    string guest, host, pile, both;
    cin >> guest >> host >> pile;

    both = guest + host;

    sort(both.begin(), both.end());
    sort(pile.begin(), pile.end());

    if (both == pile)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}