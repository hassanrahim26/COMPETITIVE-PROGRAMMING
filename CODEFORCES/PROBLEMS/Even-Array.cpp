/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1367/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		ll n, a = 0, b = 0;
		cin >> n;

		FOR
		{
			ll x;
			cin >> x;

			if (x % 2 != i % 2)
			{
				if (i % 2 == 0)
					a++;
				else
					b++;
			}
		}

		if (a != b)
			cout << -1 << nn;
		else
			cout << a << nn;
	}
	return 0;
}
