/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1613/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<ll>
#define nn "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    test
    {
        ll n;
        cin >> n;
        vi v(n);
        FOR
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 1; i <= n / 2; i++)
        {
            cout << v[i] << " " << v[0] << nn;
        }
    }
    return 0;
}
