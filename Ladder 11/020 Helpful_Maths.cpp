// https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int count(0);
    string s;
    cin >> s;
    int arr[(s.size() - 1) / 2];

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != '+')
            arr[count++] = s[i] - '0';
    }

    sort(arr, arr + count);

    for (int i = 0; i < count - 1; ++i)
        cout << arr[i] << "+";
    cout << arr[count - 1];

    return 0;
}