// https://codeforces.com/problemset/problem/155/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, element, count(0);
    cin >> n >> element;

    int maxItem(element), minItem(element);

    for (int i = 1; i < n; ++i)
    {
        cin >> element;

        if (element > maxItem)
        {
            maxItem = element;
            ++count;
        }
        else if (element < minItem)
        {
            minItem = element;
            ++count;
        }
    }

    cout << count;

    return 0;
}