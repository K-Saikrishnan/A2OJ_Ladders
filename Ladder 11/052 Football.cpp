// https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    string order;
    cin >> order;

    string substr0 = "0000000";
    string substr1 = "1111111";
    size_t found0 = order.find(substr0);
    size_t found1 = order.find(substr1);

    if (found0 != string::npos || found1 != string::npos)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}