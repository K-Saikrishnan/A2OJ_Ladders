// https://codeforces.com/problemset/problem/110/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    long long number;
    int digit, countLucky = 0;
    cin >> number;

    while (number)
    {
        digit = number % 10;
        if (digit == 4 || digit == 7)
            ++countLucky;
        number /= 10;
    }

    if (countLucky == 4 || countLucky == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}