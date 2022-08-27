/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1624/B
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
		ll a, b, c, a1, b1, c1;
		cin >> a >> b >> c;

		a1 = 2 * b - c, b1 = (a + c) / 2, c1 = 2 * b - a;

		if (a1 >= a && a1 % a == 0 && a1 != 0)
			cout << "YES\n";
		else if (b1 >= b && (c - a) % 2 == 0 && b1 % b == 0 && b1 != 0)
			cout << "YES\n";
		else if (c1 >= c && c1 % c == 0 && c1 != 0 )
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
