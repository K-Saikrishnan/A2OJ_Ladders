// https://codeforces.com/problemset/problem/233/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
        cout << -1 << endl;

    else
    {
        cout << "2 1 ";
        for (int i = 3; i < n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
    }

    return 0;
}