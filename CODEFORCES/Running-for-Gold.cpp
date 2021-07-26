/*
PROBELM LINK:- https://codeforces.com/contest/1552/problem/B
*/

#include<bits/stdc++.h>
#define ll long long int
#define test ll t; cin >> t; while(t--)
using namespace std;
 
int main()
{
	test
	{
		ll n, i, j, c = 0;
		cin >> n;
		ll a[n][5];
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 5; j++)
			{
				cin >> a[i][j];
			}
		}
 
		int x = 0;
 
		for (i = 0; i < n; i++)
		{
			c = 0;
			for (j = 0; j < 5; j++)
			{
				c += (a[i][j] < a[x][j]);
			}
 
			if (c >= 3)
				x = i;
		}
 
		c = 0;
 
		for (i = 0; i < n; i++)
		{
			c = 0;
			for (j = 0; j < 5; j++)
			{
				c += (a[i][j] < a[x][j]);
			}
 
			if (c >= 3)
			{
				c = -1;
				break;
			}
		}
 
		if (c == -1)
			cout << -1 << endl;
		else
			cout << x + 1 << endl;
 }
}
