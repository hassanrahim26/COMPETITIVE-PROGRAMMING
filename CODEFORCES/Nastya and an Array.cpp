/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/992/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
#define nn "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, x;
	cin >> n;
	set<int> s;

	FOR
	{
		cin >> x;
		if (x)
			s.insert(x);
	}

	cout << s.size() << nn;
	return 0;
}
