/*
PROBLEM LINK:- https://codeforces.com/contest/1638/problem/B
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
#define MOD 1000000007 // 10^9+7
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		int n;
		cin >> n;
		int even = -1, odd = -1;
		vi v(n);
		bool ans = false;
		FOR
		{
			int x;
			cin >> x;

			if (x & 1)
			{
				if (x < odd)
					ans = true;
				odd = x;
			}
			else
			{
				if (x < even)
					ans = true;
				even = x;
			}
		}

		if (ans)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}
