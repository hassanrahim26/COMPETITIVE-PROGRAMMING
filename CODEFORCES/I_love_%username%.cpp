/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/155/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, i;
	cin >> n;
	vector<int> v(n);
	FOR
	{
		cin >> v[i];
	}

	ll min = v[0], max = v[0], c = 0;

	for (ll i = 1; i < n; i++)
	{
		if (v[i] > max)
		{
			c++;
			max = v[i];
		}

		if (v[i] < min)
		{
			min = v[i];
			c++;
		}
	}

	cout << c << nn;
}
