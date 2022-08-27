/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/734/A
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        if (s[i] == 'D')
            d++;
    }
    if (a > d)
        cout << "Anton\n";
    else if (a < d)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
    return 0;
}
