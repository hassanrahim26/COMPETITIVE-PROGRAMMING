/*
PROBLEM LINK: https://www.hackerrank.com/challenges/30-recursion/problem
*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int x) ;

int main() 
{

    int n;
    cin >> n;
    cout << factorial(n) << endl;

    return 0;
}

int factorial(int x) 
{
    if(x == 1)
    {
        return 1;
    }
    else 
    {
    return (x * (factorial(x-1)));
    }
}
