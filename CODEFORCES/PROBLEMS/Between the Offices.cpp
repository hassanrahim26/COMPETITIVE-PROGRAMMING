/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/867/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ll n, c = 0, d = 0, i = 0;
    cin >> n;
    string s;
    cin >> s;
 
    while (i < n)
    {
        if (s[i] == 'S' && s[i + 1] == 'F')
            c++;
        if (s[i] == 'F' && s[i + 1] == 'S')
            d++;
        i++;
    }
 
    if (c > d)
        cout << "YES" << nn;
    else
        cout << "NO" << nn;
    return 0;
}
