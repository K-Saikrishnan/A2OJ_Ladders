// https://codeforces.com/problemset/problem/248/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, li, ri, numliOnes(0), numriOnes(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> li >> ri;
        if (li)
            ++numliOnes;
        if (ri)
            ++numriOnes;
    }
    cout << min(numliOnes, n - numliOnes) + min(numriOnes, n - numriOnes) << endl;

    return 0;
}