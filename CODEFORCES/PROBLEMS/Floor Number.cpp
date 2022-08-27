/*
PROBLEM LINK: https://codeforces.com/contest/1426/problem/A
*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ll t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		if(n<=2)
			cout << 1 << endl;
		if(n>2)
			cout << ceil((n-3)/x) + 2 << endl;
	}
	return 0;
}
