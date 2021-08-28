/*
PROBLEM LINK:- https://cses.fi/problemset/task/1084/
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n, m, k, i, j, c = 0;
	cin >> n >> m >> k;
	vi a(n), b(m);
 
	FOR
	{
		cin >> a[i];
	}
 
	for (i = 0; i < m; i++)
	{
		cin >> b[i];
	}
 
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
 
	i = 0, j = 0;
 
	while (i < n && j < m)
	{
		if (abs(a[i] - b[j]) <= k)
		{
			i++; j++; c++;
		}
 
		else if (a[i] - b[j] > k)
		{
			++j;
		}
 
		else
		{
			++i;
		}
	}
 
	cout << c << nn;
	return 0;
}
