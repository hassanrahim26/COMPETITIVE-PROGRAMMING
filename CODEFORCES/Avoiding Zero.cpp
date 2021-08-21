/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1427/A
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
		ll n, s = 0;
		cin >> n;
		vector<int> a(n);

		FOR
		{
			cin >> a[i];
			s += a[i];
		}

		if (s == 0)
		{
			cout << "NO" << nn;
		}
		else
		{
			sort(a.begin(), a.end());
			if (s > 0)
			{
				reverse(a.begin(), a.end());
			}

			cout << "YES" << nn;
			FOR
			{
				cout << a[i] << " ";
			}
			cout << nn;
		}
	}
	return 0;
}
