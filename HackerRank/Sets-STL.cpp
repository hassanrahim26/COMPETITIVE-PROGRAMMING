/*
PROBLEM LINK: https://www.hackerrank.com/challenges/cpp-sets/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    set<int>s;
    int n=0,i;
    cin >> n;
    for(i=0;i<n;i++){
        int y = 0, x = 0;
        cin >> y;
        cin >> x;
        if(y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            s.erase(x);
        }
        else
        {
            set<int>::iterator itr = s.find(x);
            if(itr == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}


