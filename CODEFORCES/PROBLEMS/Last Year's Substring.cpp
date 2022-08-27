/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1462/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

void solve(ll n, string s)
{
	for (ll i = 0; i <= 4; i++)
	{
		if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020")
		{
			cout << "YES" << nn;
			return;
		}
	}
	cout << "NO" << nn;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll n;
		cin >> n;
		string s;
		cin >> s;
		solve(n, s);
	}

	return 0;
}
