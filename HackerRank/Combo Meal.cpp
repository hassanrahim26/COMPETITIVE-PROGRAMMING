/*
PROBLEM LINK: https://www.hackerrank.com/challenges/combo-meal/problem
*/

#include<iostream>

using namespace std;

int main(){
    int t;
    int b,s,c;
    cin >> t;
    while(t--){
        cin >> b >> s >> c;
        cout << b+s-c << "\n";
    }
    return 0;
}
