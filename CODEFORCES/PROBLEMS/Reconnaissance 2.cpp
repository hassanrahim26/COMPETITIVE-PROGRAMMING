/*
PROBLEM LINK:- https://codeforces.com/problemset/problem/34/A
*/

#include<bits/stdc++.h>
#define ll long long
#define FOR for(int i = 0; i < n; i++)
#define test ll t; cin >> t; while(t--)
#define nn "\n"
using namespace std;
 
int main()
{
	ll n, x = 0, min = 100000, m1 = 0, m2 = 0;
	cin >> n;
	int arr[n];
 
	FOR
	{
		cin >> arr[i];
 
		x = abs(arr[i] - arr[i - 1]);
		if (x < min)
		{
			min = x;
			m1 = i + 1; m2 = i;
		}
	}
 
	x = abs(arr[n - 1] - arr[0]);
 
	if (x > min)
	{
		cout << m2 << " " << m1 << endl;
	}
	else
	{
		cout << n << " 1" << endl;
	}
 
	return 0;
}
