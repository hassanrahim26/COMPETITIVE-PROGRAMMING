/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/580/A
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
    ll n, i, ans = 1, c = 1;
    cin >> n;
    int a[n];
    FOR
    {
        cin >> a[i];
    }
 
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            c++;
        }
        else
            c = 1;
        ans = max(ans, c);
    }
 
    cout << ans << nn;
    return 0;
}
