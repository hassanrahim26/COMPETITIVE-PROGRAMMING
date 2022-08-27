/*
PROBLEM LINK:- https://codeforces.com/contest/1592/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	test
	{
		ll n, H;
		cin >> n >> H;
		vi v(n);
		FOR
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		ll x = v[n-1], y = v[n-2];
		ll r = H % (x+y), q = H / (x+y);
		
		if(r == 0) 
			cout << 2 * q << nn;
		else if(r <= x) 
			cout << 2 * q + 1 << nn;
		else 
			cout << 2 * q + 2 << nn;
	}
	return 0;
}
