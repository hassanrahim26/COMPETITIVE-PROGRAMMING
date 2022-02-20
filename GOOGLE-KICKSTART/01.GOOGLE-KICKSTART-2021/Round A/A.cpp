/*
PROBLEM LINK:- https://codingcompetitions.withgoogle.com/kickstart/round/0000000000436140/000000000068cca3
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve()
{
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int c = 0;
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - i - 1])
			c += (s[i] != s[n - i - 1]);
	}
	cout << abs(c - k) << nn;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cout << "Case #" << i + 1 << ": ";
		solve();
	}
	return 0;
}
