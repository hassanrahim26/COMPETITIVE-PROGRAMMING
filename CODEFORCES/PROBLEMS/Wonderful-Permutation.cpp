/*
PROBLEM LINK:- https://codeforces.com/contest/1712/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define test ll t; cin >> t; while(t--)
#define FOR(i, n) for(ll i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define MOD 1000000007 // 10^9+7
#define nn "\n"
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;
	vi v(n);
	FOR(i, n) cin >> v[i];
	int c = 0;
	FOR(i, k) {
		if (v[i] > k)
			c++;
	}
	cout << c << nn;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		solve();
	}
	return 0;
}
