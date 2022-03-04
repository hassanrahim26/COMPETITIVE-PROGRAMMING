/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/520/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    FOR
    {
        st.insert(tolower(s[i]));
    }
    if (st.size() >= 26)
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}
