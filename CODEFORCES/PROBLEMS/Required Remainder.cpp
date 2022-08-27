/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1374/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll x, y, n, m;
		cin >> x >> y >> n;
		m = n % x;
		if (n - m + y <= n)
		{
			cout << n - m + y << nn;
		}

		else
		{
			cout << n - m - (x - y) << nn;
		}
	}
	return 0;
}
