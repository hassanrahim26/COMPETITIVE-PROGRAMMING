/*
PROBLEM LINK:- https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb0f5/0000000000ba856a
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define MOD 1000000007 // 10^9+7
#define nn "\n"
using namespace std;

void solve() {
	ll n, c = 0;
	cin >> n;
	while (n > 0) {
		c++;
		n -= 5;
	}
	cout << c << nn;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	ll t, i = 1;
	cin >> t;
	while (t--)
	{
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
	return 0;
}
