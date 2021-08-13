/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/1183/A
*/

#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int sum(int a)
{
	int res = 0;
	while (a > 0)
	{
		res += a % 10;
		a /= 10;
	}

	return res;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll a, s = 0;
	cin >> a;
	while (sum(a) % 4 != 0)
	{
		a++;
	}

	cout << a << nn;
	return 0;
}
