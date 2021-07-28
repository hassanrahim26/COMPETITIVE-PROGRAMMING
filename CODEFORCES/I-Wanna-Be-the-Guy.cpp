/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/469/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i=0; i < n; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll n, p, q, i, j, c = 0;
	cin >> n;
	cin >> p;
	int a[100];

	for (i = 0; i < p; i++)
	{
		cin >> a[i];
	}

	cin >> q;
	for (i = p; i < p + q; i++)
	{
		cin >> a[i];
	}

	sort(a, a + (p + q));

	for (i = 0; i < p + q; i++)
	{
		if (a[i] != a[i + 1])
		{
			c++;
		}
	}

	if (n == c)
		cout << "I become the guy.\n";
	else
		cout << "Oh, my keyboard!\n";

	return 0;
}
