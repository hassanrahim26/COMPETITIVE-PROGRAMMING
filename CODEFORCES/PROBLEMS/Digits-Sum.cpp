/*
PROBLEM LINK: https://codeforces.com/contest/1553/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 10 == 9)
            cout << n / 10 + 1 << endl;
        else
            cout << n / 10 << endl;
    }
}
