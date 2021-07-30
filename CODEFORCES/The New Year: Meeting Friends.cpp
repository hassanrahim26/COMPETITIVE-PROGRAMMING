/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/723/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    ll a = max(x1, max(x2, x3));
    ll b = min(x1, min(x2, x3));
    cout << a - b << nn;
    return 0;
}
