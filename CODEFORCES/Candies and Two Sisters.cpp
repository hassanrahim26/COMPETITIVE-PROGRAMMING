/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1335/A
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
		ll n;
		cin >> n;
		if (n < 3)
		{
			cout << 0 << nn;
		}

		if (n >= 3)
		{
			if (n % 2 != 0)
				cout << n / 2 << nn;
			else
				cout << n / 2 - 1 << nn;
		}
	}
	return 0;
}
