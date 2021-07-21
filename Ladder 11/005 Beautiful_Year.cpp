// https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int input, d1, d2, d3, d4;
    cin >> input;

    while (true)
    {
        ++input;
        d1 = input % 10;
        d2 = input / 10 % 10;
        d3 = input / 100 % 10;
        d4 = input / 1000;

        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
        {
            cout << input;
            break;
        }
    }

    return 0;
}