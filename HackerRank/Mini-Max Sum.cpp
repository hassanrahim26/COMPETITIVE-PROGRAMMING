/*
PROBLEM LINK: https://www.hackerrank.com/challenges/mini-max-sum/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int a[5];
    ll s=0,i,max,min;
    for(int i=0;i<5;i++){
        cin >> a[i];
        s += a[i];
    }
    max = a[0];
    for(i=0;i<5;i++)
    {
        if(max < a[i])
            max = a[i];
    }
    min = a[0];
    for(i=0;i<5;i++)
    {
        if(min > a[i])
            min = a[i];
    }
    cout  << s-max << " "<< s-min;
    return 0;
}
