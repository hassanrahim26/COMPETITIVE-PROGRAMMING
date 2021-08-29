/*
PROBLEM LINK:- https://cses.fi/problemset/task/1068/
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ll n;
	cin >> n;
	cout << n;
	while(n>1){
		if(n%2==0)
			n/=2;
		else
			n = n*3+1;
		cout << " " << n;
	}
	return 0;
}
