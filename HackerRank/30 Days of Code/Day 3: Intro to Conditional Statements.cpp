/*
PROBLEM LINK: https://www.hackerrank.com/challenges/30-conditional-statements/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    if(n%2==0){
        if(n>=2 && n<=5)
            cout << "Not Weird";
        if(n>=6 && n<=20)
            cout << "Weird";
        if(n>20)
            cout << "Not Weird";
    }
    if(n%2!=0){
        cout << "Weird";
    }
    return 0;
}
