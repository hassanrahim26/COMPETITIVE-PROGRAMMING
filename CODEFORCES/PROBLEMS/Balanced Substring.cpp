/*
PROBLEM LINK:- https://codeforces.com/contest/1569/problem/A
*/

#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	test
	{
		ll n, check = 0;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] != s[i + 1])
			{
				check = 1;
				cout << i + 1 << " " << i + 2 << nn;
				break;
			}
		}
 
		if (check == 0)
			cout << -1 << " " << -1 << nn;
	}
 
	return 0;
}
