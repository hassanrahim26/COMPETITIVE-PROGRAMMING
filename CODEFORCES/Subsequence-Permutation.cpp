/*
PROBLEM LINK:- https://codeforces.com/contest/1552/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> n >> s1;
		s2 = s1;
		sort(s2.begin(), s2.end());
 
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			if ((s1[i] != s2[i]))
				k++;
		}
 
		cout << k << endl;
	}
 
	return 0;
}
