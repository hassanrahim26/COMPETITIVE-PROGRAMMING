/*
PROBLEM LINK: https://codeforces.com/contest/832/problem/A
*/

#include <iostream>
#define ll long long
using namespace std;
 
int main()
{
    ll n,k;
    cin >> n >> k;
    int x=n/k;
    if(x%2==0)
        cout <<"NO";
    else
        cout << "YES";
    
 
    return 0;
}
