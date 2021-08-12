/*
PROBLEM LINK:- https://codeforces.com/contest/1257/problem/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll x, y, a, b;
		cin >> x >> y;

		if (x > 3)
		{
			cout << "YES" << nn;
		}

		else if (x == 1)
		{
			if (y == 1)
				cout << "YES" << nn;
			else
				cout << "NO" << nn;
		}

		else
		{
			if (y <= 3)
				cout << "YES" << nn;
			else
				cout << "NO" << nn;
		}
	}
	return 0;
}
