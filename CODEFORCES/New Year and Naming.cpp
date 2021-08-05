/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1284/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(int i=0; i < n; i++)
#define nn "\n"
using namespace std;
 
int main() {
	ll n, m, i, q, x;
	cin >> n >> m;
	string s[22], t[22];
 
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < m; i++)
		cin >> t[i];
 
	cin >> q;
	while (q--)
	{
		int x;
		cin >> x;
		x--;
		cout << s[x % n] + t[x % m] << nn;
	}
	
	return 0;
}
