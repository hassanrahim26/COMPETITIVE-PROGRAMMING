/*
PROBLEM LINK:- https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
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

int bs1(vector<int>& v, int x) {
    int l = 0, r = v.size() - 1, ans = -1;
    while (l <= r) {
        ll m = (l + r) / 2;
        if (v[m] >= x) {
            ans = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return ans;
}

int bs2(vector<int>& v, int x) {
    int l = 0, r = v.size() - 1, ans = -1;
    while (l <= r) {
        ll m = (l + r) / 2;
        if (v[m] <= x) {
            ans = m;
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return ans;
}

void solve() {
    ll n, k;
    cin >> n;
    vi v(n);
    loop1(i, 0, n) {
        cin >> v[i];
    }
    cin >> k;
    sort(v.begin(), v.end());
    while (k--) {
        ll l, r;
        cin >> l >> r;
        int a = bs1(v, l);
        int b = bs2(v, r);
        if (a == -1 || b == -1)
            cout << 0 << " ";
        else
            cout << b - a + 1 << " ";
    }
    cout << nn;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}