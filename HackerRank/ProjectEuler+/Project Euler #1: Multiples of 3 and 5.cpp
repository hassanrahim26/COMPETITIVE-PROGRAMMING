/*
PROBLEM LINK: https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        n = n-1;
        
        ll s=0;
        
        long three = n/3,
             five = n/5,
             fifteen = n/15;
        
        s += ((3 * three * (three + 1)) / 2);
        s += ((5 * five * (five + 1)) / 2);
        s -= ((15 * fifteen * (fifteen + 1)) / 2);
        
        cout << s << endl;
    }
    return 0;
}
