/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/472/A
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
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << 4 << " " << n - 4 << nn;
    else
        cout << 9 << " " << n - 9 << nn;
    return 0;
}
