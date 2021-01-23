/*
PROBLEM LINK: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> x;
    char ch;
    int temp;
    while(ss >> temp)
    {
        x.push_back(temp);
        ss >> ch;
    }
    return x;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
