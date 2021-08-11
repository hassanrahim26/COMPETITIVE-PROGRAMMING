/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1368/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    test
    {
        ll a, b, n, c = 0;
        cin >> a >> b >> n;

        while (a <= n && b <= n)
        {
            if (a > b)
                b += a;
            else
                a += b;
            c++;
        }

        cout << c << nn;
    }
    return 0;
}
