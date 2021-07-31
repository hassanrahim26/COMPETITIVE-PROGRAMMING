/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/939/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 1; i <= n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll n, i, c = 0;
    cin >> n;
    int a[n];
    FOR
    {
        cin >> a[i];
    }
 
    FOR
    {
        if (a[a[a[i]]] == i)
        {
            c = 1;
            break;
        }
    }
 
    if (c == 0)
        cout << "NO" << nn;
    else
        cout << "YES" << nn;
 
    return 0;
}
