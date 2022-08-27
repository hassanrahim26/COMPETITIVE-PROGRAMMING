/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1296/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s = 0;
        bool check = false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x & 1)
                s++;
            else
                check = true;
        }

        if ((s & 1) || (check == true && s > 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
