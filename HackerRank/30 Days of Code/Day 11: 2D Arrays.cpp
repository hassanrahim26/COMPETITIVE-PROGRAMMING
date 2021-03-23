/* 
PROBLEM LINK: https://www.hackerrank.com/challenges/30-2d-arrays/problem
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int mat[6][6],max_sum = INT_MIN,i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin >> mat[i][j];
        }
    }
    for (int i=0; i<6-2; i++)
    {
        for (int j=0; j<6-2; j++)
        {
            int sum = (mat[i][j]+mat[i][j+1]+mat[i][j+2])+ (mat[i+1][j+1]) + (mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2]);
            max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum << endl;
    return 0;
}
