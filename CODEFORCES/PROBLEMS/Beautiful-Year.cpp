/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/271/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n;

    while (true)
    {
        n += 1;
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n / 10) % 10;
        d =  % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }

    cout << n << endl;

    return 0;
}
