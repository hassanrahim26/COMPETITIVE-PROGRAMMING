/*
PROBLEM LINL:- https://codeforces.com/problemset/problem/822/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
using namespace std;
 
ll Factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll a, b, ans = 1, i = 1;
    cin >> a >> b;
    cout << Factorial(min(a, b)) << '\n';
    return 0;
}
