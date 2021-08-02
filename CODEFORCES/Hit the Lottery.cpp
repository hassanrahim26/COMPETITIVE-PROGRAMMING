/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/996/A
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
    ll n, ans = 0;
    cin >> n;
 
    ans += n / 100;
    n %= 100;
 
    ans += n / 20;
    n %= 20;
 
    ans += n / 10;
    n %= 10;
 
    ans += n / 5;
    n %= 5;
 
    ans += n / 1;
    n %= 1;
 
    cout << ans << nn;
 
    return 0;
}
