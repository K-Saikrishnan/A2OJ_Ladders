// https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    string input, output;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '.')
        {
            output += '0';
        }
        else if (input[i] == '-' && input[i + 1] == '.')
        {
            output += '1';
            ++i;
        }
        else if (input[i] == '-' && input[i + 1] == '-')
        {
            output += '2';
            ++i;
        }
    }
    cout << output;

    return 0;
}