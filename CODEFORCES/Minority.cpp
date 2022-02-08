/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1633/B
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
#define MOD 1000000007
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		string s;
		cin >> s;
		ll c1 = 0, c2 = 0;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '0')
			{
				c1++;
			}
			else
			{
				c2++;
			}
		}

		if (c1 != c2)
			cout << min(c1, c2) << nn;
		else
			cout << c1 - 1 << nn;
	}
	return 0;
}
