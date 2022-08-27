/*
PROBLEM LINK:- https://codeforces.com/contest/1567/problem/B
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
		ll a, b, x = 0, y;
		cin >> a >> b;
		ll n = a - 1;
 
		if (n % 4 == 0) x = n;
		else if (n % 4 == 1) x = 1;
		else if (n % 4 == 2) x = n + 1;
		else x = 0;
 
		y = b ^ x;
 
		if (x == b) cout << a << nn;
		else if (y == a) cout << a + 2 << nn;
		else cout << a + 1 << nn;
	}
 
	return 0;
}
