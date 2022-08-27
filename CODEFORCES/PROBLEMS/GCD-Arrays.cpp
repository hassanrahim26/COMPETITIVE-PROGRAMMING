/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1629/B
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
		int l, r, k;
		cin >> l >> r >> k;
		if (l == r && r == 1)
			cout << "NO\n";
		else if (l == r)
			cout << "YES\n";
		else if ((r - l + 1) - (r / 2 - (l - 1) / 2) <= k)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
