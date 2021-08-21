/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/71/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		string s;
		cin >> s;
		int n = s.length();
		if (n > 10)
			cout << s[0] << n - 2 << s[n - 1] << nn;
		else
			cout << s << nn;
	}
	return 0;
}
