#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	int T;
	cin >> T;
	while(T--){
		ll a,b;
		cin >> a >> b;
		if(a%b==0)
			cout << 0 << endl;
		else
			cout << b-(a%b)<< endl;
	}
	return 0;
}
