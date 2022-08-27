/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1436/A
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
		ll n, m, x, s = 0;
		cin >> n >> m;

		FOR
		{
			cin >> x;
			s += x;
		}

		if (s == m)
			cout << "YES" << nn;
		else
			cout << "NO" << nn;
	}
	return 0;
}
