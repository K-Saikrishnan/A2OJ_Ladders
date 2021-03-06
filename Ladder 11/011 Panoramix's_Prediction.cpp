// https://codeforces.com/problemset/problem/80/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int next = n + 1;
    while (!isPrime(next))
        ++next;

    cout << (next == m ? "YES" : "NO") << endl;

    return 0;
}