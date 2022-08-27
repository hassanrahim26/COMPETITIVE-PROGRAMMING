/*
PROBLEM LINK: https://codeforces.com/contest/118/problem/A
*/

#include <iostream>
 
using namespace std;
 
int main()
{
    string s,x;
    cin >> s;
    for(int i =0; i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='Y'||s[i]=='y'||
           s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||
           s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            cout << "";
        else{
            if(s[i]>='A' && s[i]<='Z'){
                x = s[i] +32;
                cout << "." <<x;}
            else
                cout << "." << s[i];
            }
        }
    
            return 0;
}
