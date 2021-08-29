/*
PROBLEM LINK:- https://cses.fi/problemset/task/1095
*/

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define MOD 1000000007
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
ll power(ll a, ll b)
{
	ll p;
 
	if (b == 0)
		return 1;
 
	p = power(a, b / 2);
	p = p * p % MOD;
 
	if (b % 2 == 1)
		p = p * a % MOD;
 
	return p;
}
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll a, b;
		cin >> a >> b;
		cout << power(a, b) << nn;
	}
 
	return 0;
}
