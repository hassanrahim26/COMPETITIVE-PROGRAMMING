/*
PROBLEM LINK:- https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435a5b/000000000077a882
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve()
{
    ll n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            c = 1;
        else if (s[i - 1] < s[i])
            c++;
        else
            c = 1;
        cout << " " << c;
    }
    cout << nn;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ":";
        solve();
    }

    return 0;
}
