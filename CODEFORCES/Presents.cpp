/*
PROBLEM LINK: https://codeforces.com/problemset/problem/136/A
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
 
	int b[n];
	for (int i = 1; i <= n; i++)
	{
		b[a[i]] = i;
	}
 
	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
 
	return 0;
 
}
