/*
PROBLEM LINK:- https://codeforces.com/contest/1619/problem/B
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
		int n;
		cin >> n;
		set<int> s;
 
		for (int i = 1; i * i <= n ; i++)
			s.insert(i * i);
 
		for (int i = 1; i*i * i <= n; i++)
			s.insert(i*i * i);
 
		cout << s.size() << nn;
	}
 
	return 0;
}
