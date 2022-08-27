/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/231/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, x, y, z, s = 0, c = 0;
	cin >> n;
	FOR
	{
		cin >> x >> y >> z;
		s = x + y + z;
		if (s >= 2)
		{
			c++;
		}
	}

	cout << c << nn;
}
