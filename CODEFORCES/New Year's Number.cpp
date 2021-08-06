/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1475/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i=0; i < n; i++)
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll n, c1, c2;
		cin >> n;
		c1 = n % 2020;
		c2 = (n - c1) / 2020 - c1;
 
		if (c2 >= 0 && 2020 * c2 + 2021 * c1 == n)
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
	return 0;
}
