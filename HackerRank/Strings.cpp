/*
PROBLEM LINK: https://www.hackerrank.com/challenges/c-tutorial-strings/problem
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a;
    cin >> b;
    string c=a+b;
    string a1 = a,b1 = b;
    a1[0] = b[0],b1[0] = a[0];
    int l1= a.size();
    int l2= b.size();
    cout << l1 << " " << l2 << endl;
    cout << c << endl;
    cout << a1 << " " << b1;
    return 0;
}
