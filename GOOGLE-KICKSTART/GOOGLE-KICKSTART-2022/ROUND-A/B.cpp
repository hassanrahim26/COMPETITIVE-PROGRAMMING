/*
PROBLEM LINK:- https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7997
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int rem = 0;

    for (char c : s)
        rem = (rem + (c - '0')) % 9;

    int d = (9 - rem) % 9;
    int c;

    if (d == 0)
        c = 1;
    else
        c = 0;

    while (c < s.size() && s[c] - '0' <= d)
    {
        c++;
    }
    s.insert(s.begin() + c, (char)(d + '0'));

    cout << s << nn;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    ll t, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }

    return 0;
}
