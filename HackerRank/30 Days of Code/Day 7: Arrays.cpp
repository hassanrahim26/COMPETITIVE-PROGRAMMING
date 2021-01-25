/*
PROBLEM LINK: 
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{    
    ll n;
    cin >> n;
    int array[n],i;
    for(i=0;i<n;i++)
    {
    cin>>array[i];
    }
 
    for(i=n-1;i>=0;i--)
    {
    cout<<array[i] << " "; 
    }
}
