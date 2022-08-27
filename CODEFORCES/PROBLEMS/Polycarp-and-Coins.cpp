/*
PROBLEM LINK:- https://codeforces.com/contest/1551/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int m = n % 3;
        if (m == 0)
            cout << n / 3 << " " << n / 3 << endl;
        else if (n == 1)
            cout << n / 3 + 1  << " " << n / 3 << endl;
        else if (m == 1)
            cout << n / 3 + 1 << " " << n / 3 << endl;
        else
            cout << n / 3 << " " << n / 3 + 1 << endl;
    }
    return 0;
}
