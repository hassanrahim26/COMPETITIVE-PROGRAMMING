/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/749/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 1; i <= n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n, m;
	cin >> n;

	m = n / 2;

	if (n % 2 == 0)
	{
		cout << m << nn;
		while (n > 0)
		{
			cout << 2 << " ";
			n -= 2;
		}
	}

	else
	{
		cout << m << nn;
		while (n > 3)
		{
			cout << 2 << " ";
			n -= 2;
		}
		cout << 3;
	}

	cout << nn;
	return 0;
}
