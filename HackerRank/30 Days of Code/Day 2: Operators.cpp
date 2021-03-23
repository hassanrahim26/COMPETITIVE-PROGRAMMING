/*
PROBLEM LINK: https://www.hackerrank.com/challenges/30-operators/problem
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
     double mealcost,tip,tax,totalcost;
     int tipercent,taxpercent;
     cin >> mealcost;
     cin >> tipercent;
     cin >> taxpercent;
     tip = (mealcost/100)*tipercent;
     tax = (mealcost/100)*taxpercent;
     totalcost = mealcost+tip+tax;
     cout << round(totalcost);
    return 0;    
}
