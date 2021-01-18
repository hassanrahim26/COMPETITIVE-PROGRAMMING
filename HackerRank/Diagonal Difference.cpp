/*
PROBLEM LINK: https://www.hackerrank.com/challenges/diagonal-difference/problem
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    cout << abs((a[0][0]+a[1][1]+a[2][2])-(a[0][2]+a[1][1]+a[2][0]));
}
