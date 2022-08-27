/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/978/B
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
	ll n, c = 0;
	cin >> n;
	string s, a;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		a = s.substr(i, 3);
		if (a == "xxx")
		{
			c++;
		}
	}
	cout << c << nn;
	return 0;
}
