/*
PROBLEM LINK:- https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define test ll t; cin >> t; while(t--)
#define loop1(i,k,n) for(ll i = k; i < n; ++i)
#define loop2(i,k,n) for(ll i = k; i > n; --i)
#define loop3(i,k,n) for(ll i = k; i <= n; ++i)
#define loop4(i,k,n) for(ll i = k; i >= n; --i)
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define mod 1000000007 // 10^9+7
#define nn "\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    loop1(i, 0, n) {
        cin >> v[i];
    }
    loop1(i, 0, k) {
        ll x;
        cin >> x;
        ll l = -1, r = n;
        while (r > l + 1) {
            ll m = (l + r) / 2;
            if (v[m] < x)
                l = m;
            else
                r = m;
        }
        if (r < n and v[r] == x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}