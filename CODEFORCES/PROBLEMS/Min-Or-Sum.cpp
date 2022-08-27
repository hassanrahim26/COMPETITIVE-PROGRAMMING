/*
PROBLEM LINK:- https://codeforces.com/contest/1635/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define test ll t; cin >> t; while(t--)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		ll n;
		cin >> n;
		vi v(n);
		int x = 0;
		FOR
		{
			cin >> v[i];
			x |= v[i];
		}
		cout << x << nn;
	}
	return 0;
}
