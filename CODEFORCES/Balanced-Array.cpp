/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1343/B
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
	test
	{
		ll n;
		cin >> n;

		if (n % 4 != 0)
		{
			cout << "NO\n";
		}

		else
		{
			cout << "YES\n";

			int i, s1 = 0, s2 = 0;
			for (i = 2; i <= n; i += 2)
			{
				s1 += i;
				cout << i << " ";
			}

			for (i = 1; i < n - 1; i += 2)
			{
				s2 += i;
				cout << i << " ";
			}

			cout << s1 - s2 << nn;
		}

	}
	return 0;
}
