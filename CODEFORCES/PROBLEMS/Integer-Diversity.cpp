/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1616/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    test
    {
        ll n;
        cin >> n;
        map<int, int> mp;
        FOR
        {
            ll a;
            cin >> a;
            mp[abs(a)]++;
        }
        ll ans = mp.size();
        for (auto i : mp)
        {
            if (i.second > 1 && i.first != 0)
                ans++;
        }
        cout << ans << nn;
    }
    return 0;
}
