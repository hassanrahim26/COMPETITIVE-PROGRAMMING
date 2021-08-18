/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1206/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	ll a, b, i;
	cin >> a;
	int v1[a];
	for (i = 0; i < a; i++)
	{
		cin >> v1[i];
	}

	cin >> b;
	int v2[b];
	for (i = 0; i < b; i++)
	{
		cin >> v2[i];
	}

	sort(v1, v1 + a);
	sort(v2, v2 + b);

	cout << v1[a - 1] << " " << v2[b - 1] << nn;
	return 0;
}
