/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/148/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i=0; i < n; i++)
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll k, l, m, n, d, i, c = 0;
	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;
	cin >> d;
	for (i = 1; i <= d; i++)
	{
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
			c++;
	}
 
	cout << c << "\n";
 
	return 0;
}
