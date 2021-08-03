/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1385/A#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    test
    {
        vector<int> a(3);
        int x;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
        if (a[1] != a[2])
            cout << "NO\n";
        else
            cout << "YES\n" << a[0] << " " << a[0] << " " << a[2] << nn;
    }
    return 0;
}
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
    test
    {
        vector<int> a(3);
        int x;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
        if (a[1] != a[2])
            cout << "NO\n";
        else
            cout << "YES\n" << a[0] << " " << a[0] << " " << a[2] << nn;
    }
    return 0;
}
