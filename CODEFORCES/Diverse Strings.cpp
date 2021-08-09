/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1144/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 1; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
    test
    {
        string s;
        cin >> s;
        ll n = s.length();
        sort(s.begin(), s.end());
        bool check = 1;
        FOR
        {
            if (s[i] != s[i - 1] + 1)
                check = 0;
        }

        if (check)
            cout << "YES" << nn;
        else
            cout << "NO" << nn;
    }
    return 0;
}
