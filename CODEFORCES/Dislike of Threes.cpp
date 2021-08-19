/*
PROBLEM LINK:- https://codeforces.com/contest/1560/problem/A
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
		ll k, i;
		cin >> k;
		vector<int> v;
		for (i = 1; i < 100000; i++)
		{
			if (i % 3 == 0 || i % 10 == 3)
				continue;
			v.push_back(i);
		}

		cout << v[k - 1] << nn;
	}
	return 0;
}
