/*
PROBLEM LINK:- https://codeforces.com/contest/268/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, i, j, c = 0;
	cin >> n;
	vi h(n), a(n);

	FOR
	{
		cin >> h[i] >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i != j and h[i] == a[j])
				c++;
		}
	}

	cout << c << nn;
	return 0;
}
