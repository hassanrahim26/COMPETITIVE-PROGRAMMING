/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1257/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll n, x, a, b;
		cin >> n >> x >> a >> b;
		cout << min(n - 1, abs(a - b) + x) << nn;
	}
	return 0;
}
