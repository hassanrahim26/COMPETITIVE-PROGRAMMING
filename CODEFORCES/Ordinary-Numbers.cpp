/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1520/B
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
		ll n, i, j, ans = 0;
		cin >> n;
		for (ll i = 1; i <= n; i = i * 10 + 1)
		{
			for (ll j = 1; j <= 9; j++)
			{
				if (i * j <= n)
				{
					ans++;
				}
			}
		}
 
		cout << ans << endl;
	}
 
	return 0;
}
