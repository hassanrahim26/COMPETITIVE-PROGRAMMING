/*
PROBLEM LINK:- https://codeforces.com/contest/1644/problem/A
*/

#include <bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
using namespace std;

int main () {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    test
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
            mp[s[i]] = i;
        if (mp['r'] < mp['R'] && mp['g'] < mp['G'] && mp['b'] < mp['B'])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
