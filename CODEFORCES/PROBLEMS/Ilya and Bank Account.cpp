/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/313/A
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m;
    cin >> n;
    m = n;
 
    if (n / 10 > m)
    {
        m = n / 10;
    }
 
    if (n % 10 + (n / 100) * 10 > m)
    {
        m = n % 10 + (n / 100) * 10;
    }
    cout << m << nn;
    return 0;
}
