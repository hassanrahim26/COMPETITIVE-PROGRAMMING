/*
PROBLEM LINK:- https://codeforces.com/contest/1704/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    for (int i = n - m + 1; i < n; i++) {
        if (a[i] != b[i - n + m]) {
            cout << "NO\n";
            return  ;
        }
    }

    for (int i = 0; i <= n - m; i++) {
        if (a[i] == b[0]) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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
