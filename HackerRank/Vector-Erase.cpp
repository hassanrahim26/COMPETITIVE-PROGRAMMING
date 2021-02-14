/*
PROBLEM LINK: https://www.hackerrank.com/challenges/vector-erase/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,i,x,a,b,z,size;
    cin >> n;
    vector<int> y;
    for(i=0;i<n;i++){
        cin >> z;
        y.push_back(z);
     }
     cin >> x >> a >> b;
     y.erase(y.begin()+x-1);
     y.erase(y.begin()+a-1,y.begin()+b-1);
    
    size = y.size();
    cout << size << endl;
    
    for(i=0;i<size;i++)    
        cout << y[i] << " ";
    return 0;
}
