// https://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <cctype>

using namespace std;

bool isvowel(char ch)
{
    return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'y');
}

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        char ch = tolower(s[i]);
        if (!isvowel(ch))
            cout << "." << ch;
    }
    return 0;
}