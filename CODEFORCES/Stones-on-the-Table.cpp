/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/266/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(ll i = 0; i < n; i++)
using namespace std;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n, c = 0;
	cin >> n;
	string s;
	cin >> s;
 
	FOR
	{
		if (s[i] == s[i + 1])
			c++;
	}
 
	cout << c;
	return 0;
}
