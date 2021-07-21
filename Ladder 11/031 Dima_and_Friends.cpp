// https://codeforces.com/problemset/problem/272/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, fingers, total(0), answer(0);
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> fingers;
        total += fingers;
    }

    for (int i = 1; i <= 5; i++)
        if ((total + i) % (n + 1) != 1)
            ++answer;

    cout << answer << endl;

    return 0;
}