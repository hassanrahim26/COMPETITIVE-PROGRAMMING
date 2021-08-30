/*
PROBLEM LINK:- https://codeforces.com/contest/1556/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll c, d;
		cin >> c >> d;

		if (c == 0 && d == 0)
		{
			cout << 0 << nn;
		}

		else if (c == d)
		{
			cout << 1 << nn;
		}

		else if (abs(c - d) % 2 == 0)
		{
			cout << 2 << nn;
		}

		else
			cout << -1 << nn;
	}

	return 0;
}
