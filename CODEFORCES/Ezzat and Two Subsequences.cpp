/*
PROBLEM LINK:- https://codeforces.com/contest/1557/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define test ll t; cin >> t; while(t--)
#define pb push_back
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll n, i;
		double s = 0.0, x, y;
		cin >> n;
		vector<int> v(n);
 
		FOR
		{
			cin >> v[i];
		}
 
		sort(v.begin(), v.end());
 
		x = v[n - 1];
 
		for (i = 0; i < n - 1; i++)
		{
			s += v[i];
		}
 
		y = s / (n - 1);
 
		cout << fixed << setprecision(9) << x + y << nn;
	}
 
	return 0;
}
