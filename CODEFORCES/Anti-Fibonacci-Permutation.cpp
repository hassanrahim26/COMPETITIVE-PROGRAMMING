/*
PROBLEM LINK:- https://codeforces.com/contest/1644/problem/B
*/

#include <bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define vi vector<int>
#define nn "\n"
#define pb push_back
using namespace std;

ll n;

void display(vi &arr)
{
    for (auto x : arr)
        cout << x << " ";
    cout << nn;
}

void solve()
{
    vi v;
    for (int i = n; i >= 1; i--)
        v.pb(i);
    display(v);

    for (int i = n - 1; i >= 1; i--)
    {
        swap(v[i - 1], v[i]);
        display(v);
    }
}

int main () {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    test
    {
        cin >> n;
        solve();
    }

    return 0;
}
