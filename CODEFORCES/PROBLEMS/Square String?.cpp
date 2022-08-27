/*
PROBLEM LINK:- https://codeforces.com/contest/1619/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		string s;
		cin >> s;
		ll n = s.length();
		ll c = 0;

		if (n & 1)
			cout << "NO\n";
		else
		{
			for (int i = 0; i < n / 2; i++)
			{
				if (s[i] == s[n / 2 + i])
					c++;
			}

			if (c == n / 2)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}
