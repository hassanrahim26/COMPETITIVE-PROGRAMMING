/*
PROBLEM LINK:- https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7021
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if (i == s.size())
        cout << t.size() - s.size() << nn;
    else
        cout << "IMPOSSIBLE\n";
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
