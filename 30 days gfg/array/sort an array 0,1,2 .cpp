#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
#define loop1()  for(int i=0;i<n;i++)
#define loop2()  for(int j=0;j<m;j++)
using namespace std;
int main()
{
	w(t)
	{
		int n;
		cin >> n;
		int i, a[n];
		loop1()
		cin >> a[i];
		int c0 = 0, c1 = 0, c2 = 0;
		for (i = 0; i < n; i++) {
			if (a[i] == 0)
				c0++;
			else if (a[i] == 1)
				c1++;
			else
				c2++;
		}
		for (i = 0; i < c0; i++)
			a[i] = 0;
		for (i = 0; i < c1; ++i)
			a[c0 + i] = 1;
		for (i = 0; i < c2; i++)
			a[c1 + c0 + i] = 2;
		for (i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;

	}
}