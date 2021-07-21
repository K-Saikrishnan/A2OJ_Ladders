// https://codeforces.com/problemset/problem/228/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int count(0), element;
    set<int> hash;

    for (int i = 0; i < 4; ++i)
    {
        cin >> element;
        if (hash.find(element) == hash.end())
            hash.insert(element);
        else
            ++count;
    }

    cout << count;

    return 0;
}