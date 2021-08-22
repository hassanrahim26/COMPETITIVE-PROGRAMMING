/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1399/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i=0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll n, i, c = 0;
		cin >> n;
		vector<int> v(n);

		FOR
		{
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		for (i = 1; i < n; i++)
		{
			if (v[i] - v[i - 1] <= 1)
			{
				continue;
			}

			else
			{
				c = 1;
				break;
			}
		}

		if (c == 0)
			cout << "YES" << nn;
		else
			cout << "NO" << nn;
	}
}
