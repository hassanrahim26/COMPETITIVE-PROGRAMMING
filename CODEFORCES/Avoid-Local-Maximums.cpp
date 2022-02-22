/*
PROBLEM LINK:- https://codeforces.com/contest/1635/problem/B
*/

#include <bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main () {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    test
    {
        ll n, c = 0;
        cin >> n;
        vi v(n);
        FOR
        {
            cin >> v[i];
        }
        for (int i = 1; i + 1 < n; ++i)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                if (i + 2 < n)
                {
                    v[i + 1] = max(v[i], v[i + 2]);
                }
                else
                {
                    v[i + 1] = v[i];
                }
                c++;
            }
        }
        cout << c << endl;
        for (auto x : v)
            cout << x << ' ';
        cout << nn;
    }

    return 0;
}
