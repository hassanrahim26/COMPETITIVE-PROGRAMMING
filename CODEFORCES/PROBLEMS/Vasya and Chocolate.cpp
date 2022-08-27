/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1065/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll s, a, b, c, x, y, z;
		cin >> s >> a >> b >> c;
		x = floor(s / c);
		y = floor(x / a);
		z = y * b;
		cout << x + z << nn;
	}
	return 0;
}
