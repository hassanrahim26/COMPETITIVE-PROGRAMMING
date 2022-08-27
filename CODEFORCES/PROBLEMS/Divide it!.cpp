/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1176/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll n, c1 = 0, c2 = 0, c3 = 0;
		cin >> n;
 
		while (n % 5 == 0)
		{
			n = (n * 4) / 5;
			c1++;
		}
 
		while (n % 3 == 0)
		{
			n = (n * 2) / 3;
			c2++;
		}
 
		while (n % 2 == 0)
		{
			n /= 2;
			c3++;
		}
 
		if (n <= 1)
		{
			cout << c1 + c2 + c3 << nn;
		}
 
		else
			cout << -1 << nn;
	}
 
	return 0;
}
