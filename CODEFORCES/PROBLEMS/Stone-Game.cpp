/*
PROBLEM LINK:- https://codeforces.com/contest/1538/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for (int i = 0; i < n; ++i)
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll n, x, y;
		cin >> n;
		vector<int> a(n);
 
		FOR
		{
			cin >> a[i];
			if (a[i] == 1)
				x = i;
			if (a[i] == n)
				y = i;
		}
 
		if (x > y)
			swap(x, y);
		cout << min({y + 1, n - x, x + 1 + (n - y)}) << '\n';
	}
	return 0;
}
