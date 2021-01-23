/*
PROBLEM LINK: https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,n;
    cin >> t;
    while(t--){
        cin >> n;
        ll s = 0, n1 = 1, n2 = 2, n3;
        while(n2 <= n)
        {
            if(n2 % 2 == 0)
                s += n2;
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << s << endl;
    }
    return 0;
}
