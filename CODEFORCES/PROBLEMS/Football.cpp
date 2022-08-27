/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/96/A
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin >> s;
    ll i, c = 1;
    ll n = s.length();

    for (i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            c++;
        else
            c = 1;
        if (c >= 7)
        {
            cout << "YES" << nn;
            return 0;
        }
    }

    cout << "NO" << nn;
    return 0;
}
