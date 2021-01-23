/*
PROBLEM LINK: https://www.hackerrank.com/challenges/30-loops/problem
*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    for(int i=1;i<=10;i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
    return 0;
}
