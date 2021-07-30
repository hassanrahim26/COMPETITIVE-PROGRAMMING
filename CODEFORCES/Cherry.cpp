/* 
PROBLEM LINK:- https://codeforces.com/contest/1554/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    test
    {
        ll n, ans = 0, y;
        cin >> n;
        vector<int> a(n);

        FOR
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {
            y = 1LL * a[i] * a[i - 1];
            ans = max(ans, y);
        }

        cout << ans << '\n';
    }

    return 0;
}
