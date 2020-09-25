#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
using namespace std;
int main()
{
	w(t)
	{

		int n, i;
		int ans = 0;
		cin >> n;
		int a[n + 1];
		memset(a, 0, sizeof(a));
		for (i = 1; i <= n; i++) {
			a[i] = a[i / 2] + i % 2;
			ans += a[i];
		}
		cout << ans << '\n';
	}
}