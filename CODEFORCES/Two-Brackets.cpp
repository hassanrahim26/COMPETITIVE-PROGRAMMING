
PROBLEM LINK:- [1452-C](https://codeforces.com/problemset/problem/1452/C)


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
        ll c = 0, d = 0, x = 0, i, j, n;
        string s;
        cin >> s;
        n = s.length();
        for (i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                c++;
            }
 
            else if (s[i] == ')' && c > 0)
            {
                x++;
                c--;
            }
 
            if (s[i] == '[')
            {
                d++;
            }
 
            else if (s[i] == ']' && d > 0)
            {
                x++;
                d--;
            }
        }
 
        cout << x << nn;
    }
    return 0;
}
