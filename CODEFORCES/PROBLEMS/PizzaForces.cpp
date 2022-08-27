/*
PROBLEM LINK:- https://codeforces.com/contest/1555/problem/A
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
    test
    {
        ll n;
        cin >> n;
 
        if (n <= 6)
            cout << 15 << nn;
        else if (n % 2)
            cout << ((n + 1) * 5) / 2 << nn;
        else
            cout << (n * 5) / 2 << nn;
    }
 
    return 0;
}
