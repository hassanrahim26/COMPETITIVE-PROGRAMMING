/*
PROBLEM LINK:- https://codeforces.com/contest/1551/problem/B1
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int a = 0, b = 0;
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'a']++;
        }
 
        for (int i = 0; i < 26; i++)
        {
            if (v[i] == 1)
                a++;
        }
 
        for (int i = 0; i < 26; i++)
        {
            if (v[i] > 1)
                b++;
        }
 
        cout << b + a / 2 << endl;
    }
 
    return 0;
}
