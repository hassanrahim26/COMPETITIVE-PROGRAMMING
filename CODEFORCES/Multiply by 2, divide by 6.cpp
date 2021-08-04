/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1374/B
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
		ll n, c1 = 0, c2 = 0;
		cin >> n;
		while (n % 2 == 0)
		{
			n /= 2;
			c1++;
		}
 
		while (n % 3 == 0)
		{
			n /= 3;
			c2++;
		}
 
		if (n == 1 && c1 <= c2)
		{
			cout << 2 * c2 - c1 << nn;
		}
		else
		{
			cout << -1 << nn;
		}
	}
	return 0;
}
