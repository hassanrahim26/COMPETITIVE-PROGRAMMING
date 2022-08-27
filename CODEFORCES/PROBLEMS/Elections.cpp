/*
PROBLEM LINK:- https://codeforces.com/contest/1593/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;

int solve(int a, int b, int c)
{
    return max(0, max(b, c) + 1 - a);
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    test
    {
        ll n, a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << " " << solve(b, a, c) << " " << solve(c, a, b) << nn;
    }
    return 0;
}
