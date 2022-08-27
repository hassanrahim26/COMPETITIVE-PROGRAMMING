/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1517/A
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
		ll n, s = 0;
		cin >> n;

		if (n % 2050 == 0)
		{
			n /= 2050;
			while (n > 0)
			{
				s += n % 10;
				n /= 10;
			}

			cout << s << nn;
		}

		else
			cout << -1 << nn;
	}

	return 0;
}
