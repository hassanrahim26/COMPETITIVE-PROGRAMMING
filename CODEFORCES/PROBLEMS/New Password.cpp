/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/770/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ll n, k;
    cin >> n >> k;
 
    FOR
    {
        cout << char('a' + i % k);
    }
 
    cout << nn;
 
    return 0;
}
