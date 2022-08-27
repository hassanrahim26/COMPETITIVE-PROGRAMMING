/*
PROBLEM LINK:- https://codeforces.com/contest/1633/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
#define MOD 1000000007
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		ll n;
		cin >> n;
		if (n % 7 != 0)
		{
			n = (n / 10) * 10;
			n += 7 - (n % 7);
		}

		cout << n << nn;
	}
	return 0;
}
