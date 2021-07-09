/* 
PROBLEM LINK:- https://codeforces.com/contest/1542/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll t, n, i;
    cin >> t;
    while (t--) {
        cin >> n;
        int y = 0;
        for (i = 1; i <= 2 * n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
                y++;
        }
        if (y == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
