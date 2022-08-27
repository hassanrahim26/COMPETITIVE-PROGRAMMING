/*
PROBLEM LINK:- https://codeforces.com/contest/1566/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    test
    {
        ll n,s,m;
        cin >> n >> s;
        m = n/2 + 1;
        cout << s/m << nn;
    }
    return 0;
}
