/*
PROBLEM LINK: https://codeforces.com/contest/1337/problem/B
*/

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
 
int main(){
	ll t,x,n,m;
	cin >> t;
	while(t--){
		cin >> x >> n >> m;
		while(n--){
			if(x>0 && x/2+10<x){
				x = x/2 + 10;
			}
		}
		if(x<=m*10)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		} 
	}
