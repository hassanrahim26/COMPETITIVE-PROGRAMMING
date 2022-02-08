/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/266/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n, count = 0;
	cin >> n;
	char c[n];
	FOR
	{
		cin >> c[i];
	}

	for (int i = 1; i < n; i++)
	{
		if (c[i - 1] == c[i])
			count++;
	}

	cout << count;
	return 0;
}
