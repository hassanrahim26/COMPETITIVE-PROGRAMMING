/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/716/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, c, x = 0;
	cin >> n >> c;
	vector<int> v(n);

	FOR
	{
		cin >> v[i];
	}

	FOR
	{
		if (i == 0)
			x++;
		else
		{
			if ((v[i] - v[i - 1]) <= c)
				x++;
			else
				x = 1;
		}
	}

	cout << x << nn;

	return 0;
}
