/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1466/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll n, temp;
		cin >> n;
		vector<int> v(n);
		set<int> s;
		FOR
		{
			cin >> v[i];
		}

		if (n == 1)
		{
			cout << 0 << nn;
		}

		if (n == 2)
		{
			cout << 1 << nn;
		}

		if (n > 2)
		{
			FOR
			{
				for (ll j = i + 1; j < n; j++)
				{
					temp = v[j] - v[i];
					s.insert(temp);
				}
			}

			cout << s.size() << nn;
		}
	}

	return 0;
}
