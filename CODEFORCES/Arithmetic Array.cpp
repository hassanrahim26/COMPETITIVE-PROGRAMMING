/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1537/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    test
    {
        ll n;
        double s = 0.0;
        cin >> n;
        vector<int> a(n);
 
        FOR
        {
            cin >> a[i];
            s += a[i];
        }
 
        if (s < n)
            cout << 1 << nn;
        else
            cout << s - n << nn;
    }
 
    return 0;
}
