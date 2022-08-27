/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/266/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 1; i <= n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, t, i, j;
	cin >> n >> t;

	string s;
	cin >> s;
	n = s.length();

	for (i = 0; i < t; i++)
	{
		for (j = 1; j < n;)
		{
			if (s[j - 1] == 'B' && s[j] == 'G')
			{
				swap(s[j - 1], s[j]);
				j += 2;
			}
			else
				j++;
		}
	}

	cout << s << nn;
	return 0;
}
