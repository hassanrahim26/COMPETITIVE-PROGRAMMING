/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1420/A
*/

#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll n, m, c = 0, i, j;
		cin >> n;
		vi v(n);
		FOR
		{
			cin >> v[i];
		}

		bool check = false;
		for (i = 1; i < n; i++)
		{
			if (v[i] >= v[i - 1])
			{
				check = true;
				break;
			}
		}

		if (check) cout << "YES" << nn;
		else cout << "NO" << nn;
	}

	return 0;
}
