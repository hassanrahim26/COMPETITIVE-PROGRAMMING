/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1325/B
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for (int i = 0; i < n; ++i)
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	test
	{
		ll n, x;
		cin >> n;
		set<int> v;
 
		while (n--)
		{
			cin >> x;
			v.insert(x);
		}
 
		cout << v.size() << endl;
	}
	return 0;
}
