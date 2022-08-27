/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1451/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    test
    {
        ll n, c = 0;
        cin >> n;
        ll m = n / 2;
 
        if (n == 1)
            cout << 0 << '\n';
 
        if (n == 2)
            cout << 1 << '\n';
 
        if (n == 3)
            cout << 2 << '\n';
 
        while (n > 3)
        {
            if (n % 2 == 0)
            {
                n /= m;
                c++;
                if (n == 2)
                    cout << c + 1 << '\n';
                if (n == 3)
                    cout << c + 2 << '\n';
            }
 
            else if (n % 2 != 0)
            {
                n -= 1;
                if (n % 2 == 0)
                {
                    n /= m;
                    c++;
                    if (n == 2)
                        cout << c + 2 << '\n';
                    if (n == 3)
                        cout << c + 3 << '\n';
                }
 
            }
        }
    }
 
    return 0;
}
