// https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int element, posi, posj;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; j++)
        {
            cin >> element;
            if (element)
            {
                posi = i;
                posj = j;
            }
        }
    cout << abs(posi - 2) + abs(posj - 2) << endl;
    return 0;
}