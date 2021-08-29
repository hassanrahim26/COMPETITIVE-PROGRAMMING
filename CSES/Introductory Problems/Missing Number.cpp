/*
PROBLEM LINK:- https://cses.fi/problemset/task/1083
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ll n,s=0;
	cin >> n;
	for(int i=1;i<n;++i){
		int a;
		cin >> a;
		s+=a;
	}
	cout << n*(n+1)/2-s;
	return 0;
}
