/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/133/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
using namespace std;

int main()
{
    string s;
    cin >> s;
    ll n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
