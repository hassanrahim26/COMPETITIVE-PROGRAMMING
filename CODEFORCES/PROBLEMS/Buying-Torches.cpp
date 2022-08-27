/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1418/A
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
#define MOD 1000000007 // 10^9+7
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		ll x, y, k;
		cin >> x >> y >> k;
		ll s = y * k + k - 1;
		ll ans = (s + x - 2) / (x - 1) + k;
		cout << ans << nn;
	}
	return 0;
}
