/*
PROBLEM LINK:- 
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 1; i <= n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll n, x;
    cin >> n;
    if (n < 6)
        cout << 0 << nn;
 
    if (n > 5)
    {
        if (n % 2 == 0)
        {
            x = (n + 2) / 4;
            cout << x - 1 << nn;
        }
 
        else
            cout << 0 << nn;
    }
 
 
    return 0;
}
