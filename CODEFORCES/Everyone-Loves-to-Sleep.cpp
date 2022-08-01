/*
PROBLEM LINK:- https://codeforces.com/contest/1714/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

void solve()
{
    ll n, h, m, a, b, d, ans = 10000;
    cin >> n >> h >> m;
    while (n--)
    {
        cin >> a >> b;
        ll x = h * 60 + m;
        ll y = a * 60 + b;
        ll d = y - x;
        if (d < 0)
            d += 1440;
        ans = min(ans, d);
    }
    cout << ans / 60 << " " << ans % 60 << nn;
    return;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    test
    {
        solve();
    }
    return 0;
}
