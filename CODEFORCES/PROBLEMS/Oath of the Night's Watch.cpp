/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/768/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i=0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, m1 = 0, m2 = 1000000007, c1 = 0, c2 = 0;
	cin >> n;
	ll a[n];
 
	FOR
	{
		cin >> a[i];
		m1 = max(m1, a[i]), m2 = min(m2, a[i]);
	}
 
	FOR
	{
		if (a[i] == m1)
			c1++;
		if (a[i] == m2)
			c2++;
	}
 
	if (m1 == m2)
		cout << 0 << nn;
	else
		cout << n - c1 - c2 << nn;
 
	return 0;
}
