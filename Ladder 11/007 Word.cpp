// https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <cctype>

using namespace std;

int main()
{
    int i;

    string word;
    cin >> word;

    int upper(0), lower(0);
    for (i = 0; i < word.length(); ++i)
    {
        if (isupper(word[i]))
            ++upper;
        else
            ++lower;
    }
    if (upper > lower)
        for (i = 0; i < word.length(); ++i)
            word[i] = toupper(word[i]);
    else
        for (i = 0; i < word.length(); ++i)
            word[i] = tolower(word[i]);

    cout << word << endl;

    return 0;
}