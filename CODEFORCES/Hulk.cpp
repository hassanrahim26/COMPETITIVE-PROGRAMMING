/*
PROBLEM LINK: https://codeforces.com/contest/705/problem/A
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << "I hate ";
        else
            cout << "I love ";
        if (i != n - 1)
            cout << "that ";
        else
            cout << "it\n";
    }
 
    return 0;
}
