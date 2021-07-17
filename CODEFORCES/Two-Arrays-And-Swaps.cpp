/*
PROBLEM LINK: https://codeforces.com/problemset/problem/1353/B
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n], b[n], i, s = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1);

        for (i = 1; i <= k; i++)
        {
            if (a[i] > b[n - i + 1])
                break;
            else
                swap(a[i], b[n - i + 1]);
        }

        for (i = 1; i <= n; i++) {
            s += a[i];
        }
        cout << s << endl;
    }
    return 0;
}
