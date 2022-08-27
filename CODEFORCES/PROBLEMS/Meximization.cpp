/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1497/A
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
		ll n, i;
		cin >> n;
		vi v(n);
		FOR cin >> v[i];
		sort(v.begin(), v.end());

		for (i = 0; i < n; i++)
			if (i == 0 || v[i] != v[i - 1])
				cout << v[i] << ' ';


		for (i = 0; i < n; i++)
			if (i > 0 && v[i] == v[i - 1])
				cout << v[i] << ' ';

		cout << nn;
	}

	return 0;
}
