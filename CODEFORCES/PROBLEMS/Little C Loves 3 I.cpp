/*
PROBLEM LINK: https://codeforces.com/contest/1047/problem/A
*/

/**
 *    author:  HASSAN26
 *    created: 14.05.2020 22:50:55       
**/
 
#include<iostream>
#define ll long long
 
using namespace std;
 
int main(){
	ll n;
	cin >> n;
	if(n%3==0)
	{
		cout << 1 << " " << 1 << " "<< n-2; 
	}
	else
	{
		cout << 1 << " " << 2 << " " << n-3 ;
	}
	return 0;
}
