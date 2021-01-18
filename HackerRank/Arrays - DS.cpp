/*
PROBLEM LINK : https://www.hackerrank.com/challenges/arrays-ds/problem
*/

#include<iostream>

using namespace std;

int main(){
    int n,i,j,b;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }

    for(i=0,j=n-1;i<j;i++,j--){
        b=a[i];
        a[i]=a[j];
        a[j]=b;
    }

    for(i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}
