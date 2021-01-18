/*
PROBLEM LINK: https://www.hackerrank.com/challenges/arrays-introduction/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int N,i,j,b;
    cin >> N;
    int a[N];
    
    for(i=0;i<N;i++){
        cin >> a[i];
    }
    for(i=0,j=N-1;i<j;i++,j--){
        b=a[i];
        a[i]=a[j];
        a[j]=b;
    }
    for(i=0;i<N;i++)
    cout << a[i] << " ";
}
