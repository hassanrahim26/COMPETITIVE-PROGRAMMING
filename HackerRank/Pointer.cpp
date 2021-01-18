/*
PROBLEM LINK: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a,b;
    cin >> a;
    cin >> b;
    cout << a+b << endl;
    if(a>=b)
    cout << a-b;
    else
    cout << b-a;
}
