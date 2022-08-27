/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/427/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0, x, y = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == -1)
        {
            y--;
            if (y < 0)
            {
                c++;
                y = 0;
            }
        }

        if (x > 0)
            y += x;
    }

    cout << c << endl;
    return 0;
}
