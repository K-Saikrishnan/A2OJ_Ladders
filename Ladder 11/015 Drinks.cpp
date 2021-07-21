// https://codeforces.com/problemset/problem/200/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, i, volFraction;
    float answer(0.0);
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> volFraction;
        answer += volFraction;
    }

    cout << answer / n << endl;

    return 0;
}