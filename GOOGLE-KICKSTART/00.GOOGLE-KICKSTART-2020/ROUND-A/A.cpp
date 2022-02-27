/*
PROBLEM LINK:- https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve()
{
    ll n, b;
    cin >> n >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        if (b >= v[i])
        {
            b -= v[i];
            c++;
        }
    }
    cout << c << nn;
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
