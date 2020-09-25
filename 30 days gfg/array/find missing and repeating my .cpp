#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
#define loop1()  for(int i=0;i<n;i++)
using namespace std;
int main()
{
	w(t)
	{
		long long  int n;
		cin >> n;
		long long int i, a[n];
		loop1()
		cin >> a[i];
		long long  int x = 0, y = 0;     // x= missing , y= repeating
		long long int sum = 0, product = 1, totalsum = n * (n + 1) / 2, totalprod = (n * (n + 1) * (2 * n + 1)) / 6;
		for (i = 0; i < n; i++)
			sum += a[i];
		product *= a[i];

		y = (totalsum - sum) * product / (totalprod - product);
		x = (totalprod / product) * y;
		cout << y << " " << x;
		cout << endl;

	}
}