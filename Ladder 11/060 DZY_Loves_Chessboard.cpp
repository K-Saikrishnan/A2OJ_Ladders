// https://codeforces.com/problemset/problem/445/A

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char board[n][m];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> board[i][j];
            if (board[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                    board[i][j] = 'B';
                else
                    board[i][j] = 'W';
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << board[i][j];
        cout << endl;
    }

    return 0;
}