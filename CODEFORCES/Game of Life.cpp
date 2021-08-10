/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1523/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    test
    {
        ll n, m, i, j;
        cin >> n >> m;
        string s1, s2;
        cin >> s1;
        s2 = s1;
        for (j = 0; j < min(m, n); j++)
        {
            for (i = 0; i < n; i++)
            {
                if (s1[i] == '0' && (s1[i - 1] != '1' && s1[i + 1] == '1'))
                {
                    s2[i] = '1';
                }
                else if (s1[i] == '0' && (s1[i - 1] == '1' && s1[i + 1] != '1'))
                {
                    s2[i] = '1';
                }
            }
 
            s1 = s2;
        }
 
        cout << s1 << nn;
    }
}
