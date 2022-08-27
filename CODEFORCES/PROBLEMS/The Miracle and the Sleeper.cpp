/*
PROBLEM LINK:- https://codeforces.com/contest/1562/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll l, r;
		cin >> l >> r;
		if (r < l * 2)
		{
			cout << r - l << nn;
		}

		else
		{
			cout << (r - 1) / 2 << nn;
		}
	}
	return 0;
}
