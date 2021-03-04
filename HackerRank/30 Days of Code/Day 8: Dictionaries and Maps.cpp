
/*
PROBLEM LINK: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,num;
    string name;
    cin >> n;
    map<string,long> pbook;
    for(int i=0;i<n;i++)
    {
        cin >> name;
        cin >> num;
        pbook[name] = num;
    }
    while(cin>>name)
    {
        if(pbook.find(name) != pbook.end())
            cout << name << "=" << pbook.find(name)->second << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
