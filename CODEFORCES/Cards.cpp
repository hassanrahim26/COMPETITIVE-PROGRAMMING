/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1220/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n;
	cin >> n;
	string s;
	cin >> s;
	n = s.length();

	sort(s.begin(), s.end());
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'n')
			cout << 1 << " ";
		if (s[i] == 'z')
			cout << 0 << " ";
	}

	cout << nn;
	return 0;
}
