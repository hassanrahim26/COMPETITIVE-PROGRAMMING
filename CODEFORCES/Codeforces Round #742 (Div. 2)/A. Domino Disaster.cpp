/*
PROBLEM LINK:- https://codeforces.com/contest/1567/problem/A
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
	test
	{
		ll n;
		cin >> n;
		string s;
		cin >> s;
		n = s.length();
 
		FOR
		{
			if (s[i] == 'U')
				s[i] = 'D';
			else if (s[i] == 'D')
				s[i] = 'U';
		}
 
		cout << s << nn;
	}
 
	return 0;
}
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
	test
	{
		ll n;
		cin >> n;
		string s;
		cin >> s;
		n = s.length();
 
		FOR
		{
			if (s[i] == 'U')
				s[i] = 'D';
			else if (s[i] == 'D')
				s[i] = 'U';
		}
 
		cout << s << nn;
	}
 
	return 0;
}
