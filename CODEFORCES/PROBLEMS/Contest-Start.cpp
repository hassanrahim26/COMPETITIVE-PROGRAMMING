/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1539/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(int i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll k;
    cin >> k;
    while (k--)
    {
        ll n, x, t, m;
        cin >> n >> x >> t;
 
        if (n * x <= t)
        {
            cout << n * (n - 1) / 2 << nn;
        }
 
        else
        {
            m = t / x;
            cout << n * m - m*(m + 1) / 2 << nn;
        }
 
    }
    return 0;
}
