/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/598/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(int i = 0; i < n; i++)
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;
 
int main()
{
	test
	{
		ll n, pow = 1, s;
		cin >> n;
		s = n * (n + 1) / 2;
		while (pow <= n)
		{
			s -= pow * 2;
			pow *= 2;
		}
 
		cout << s << nn;
	}
	return 0;
}
