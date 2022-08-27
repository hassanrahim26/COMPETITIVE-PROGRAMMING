/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1487/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int x = 100;
        for (int i = 0; i < n; i++)
        {
            x = min(x, a[i]);
        }

        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != x)
                c++;
        }

        cout << c << endl;
    }
    return 0;
}
