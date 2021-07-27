/*
PROBLEM LINK:- https://codeforces.com/contest/1433/problem/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for (int i = 0; i < n; ++i)
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    test
    {
        ll n, i, ans = 0, last = -1, x;
        cin >> n;
        FOR
        {
            cin >> x;
            if (x == 1)
            {
                if (last != -1)
                {
                    ans += i - last - 1;
                }
                last = i;
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
