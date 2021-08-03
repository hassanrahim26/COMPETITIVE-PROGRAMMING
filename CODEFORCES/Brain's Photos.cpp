/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/707/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll n, m, i, j, ans = 0;
    cin >> n >> m;
    FOR
    {
        for (j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y')
            {
                ans = 1;
            }
        }
    }
 
    if (ans)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";
    return 0;
}
