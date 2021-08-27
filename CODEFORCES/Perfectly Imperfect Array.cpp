/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1514/A
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
		vi v(n);
		bool check = true;
		FOR
		{
			cin >> v[i];
		}

		FOR
		{
			if ((double)ceil(sqrt(v[i])) !=  (double)floor(sqrt(v[i])))
			{
				check = false;
				break;
			}
		}

		if (check == false)
			cout << "YES" << nn;
		else
			cout << "NO" << nn;
	}
	return 0;
}
