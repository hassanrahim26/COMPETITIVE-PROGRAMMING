/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1041/A
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
	ll n, i, c = 0;
	cin >> n;
	vector<int> v(n);

	FOR
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[n - 1] - v[0] + 1 - n << nn;

	return 0;
}
