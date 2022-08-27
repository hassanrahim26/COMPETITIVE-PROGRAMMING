/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/467/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll c = 0;
	test
	{
		ll p, q;
		cin >> p >> q;
		if (q - p >= 2)
			c++;
	}
	cout << c << nn;
  return 0;
}
