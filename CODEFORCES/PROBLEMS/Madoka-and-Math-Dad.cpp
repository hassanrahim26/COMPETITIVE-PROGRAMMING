/*
PROBLEM LINK:- https://codeforces.com/contest/1647/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR(i, n) for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		ll n, x;
		cin >> n;
		x = n / 3;
		string a = "";

		if (n % 3 == 0)
		{
			FOR(i, x)
			{
				a += "21";
			}
		}

		else if (n % 3 == 2)
		{
			a += '2';
			FOR(i, x)
			{
				a += "12";
			}
		}

		else
		{
			a += '1';
			FOR(i, x)
			{
				a += "21";
			}
		}

		cout << a << nn;
	}
	return 0;
}
