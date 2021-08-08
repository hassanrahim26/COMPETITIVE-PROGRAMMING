/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/318/A
*/


#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
int main()
{
    ll n, k, m;
    cin >> n >> k;
    n = (n + 1) / 2;
 
    if (k <= n)
    {
        cout << (2 * k - 1) << nn;
    }
 
    else
        cout << 2 * (k - n) << nn;
    return 0;
}
