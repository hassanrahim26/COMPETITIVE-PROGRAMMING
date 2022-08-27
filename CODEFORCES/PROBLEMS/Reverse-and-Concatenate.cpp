/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1634/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	test
	{
		ll n, k;
		cin >> n >> k;
		string s1, s2;
		cin >> s1;
		s2 = s1;
		reverse(s2.begin(), s2.end());
		if (k == 0)
			cout << 1 << nn;
		else
		{
			if (s1 == s2)
				cout << 1 << nn;
			else
				cout << 2 << nn;
		}
	}
	return 0;
}
