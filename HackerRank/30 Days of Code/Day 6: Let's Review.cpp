/*
PROBLEM LINK: https://www.hackerrank.com/challenges/30-review-loop/problem
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{    
    ll t;
    cin >> t;
    for(int i=0; i<t; i++){
        string s, even = "", odd = "";
        cin >> s;
        
        for(int j=0; j<s.length();j++){
            if(j%2 == 0)
                even += s[j];
            else
                odd += s[j];
        }
        cout << even  << " " << odd << endl;
    }
    return 0;
}
