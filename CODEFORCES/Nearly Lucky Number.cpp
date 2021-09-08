/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/110/A
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
	ll n, c = 0;
	cin >> n;

	while (n)
	{
		if (n % 10 == 4 || n % 10 == 7)
			c++;
		n /= 10;
	}

	if (c == 4 || c == 7)
		cout << "YES" << nn;
	else
		cout << "NO" << nn;
	return 0;
}

