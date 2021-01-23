/*
PROBLEM LINK: https://www.hackerrank.com/challenges/vector-sort/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,i;
    cin >> n;
    vector<int> arr(n);
    
    for(i=0;i<n;i++){
        cin >> arr[i];
        
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
