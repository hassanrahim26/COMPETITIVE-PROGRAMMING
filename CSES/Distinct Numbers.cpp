#include<bits/stdc++.h>
#define ll long long
#define test ll t; cin >> t; while(t--)
#define FOR for(ll i = 0; i < n; i++)
#define vi vector<int>
#define nn "\n"
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	vi v(n);
	set<int> S;
	FOR
	{
		cin >> v[i];
		S.insert(v[i]);
	}
 
	cout << S.size() << nn;
	return 0;
}
