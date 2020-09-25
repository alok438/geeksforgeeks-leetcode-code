#include <bits/stdc++.h>

using namespace std;

int main()
{	int n; cin >> n;
	int a[n];
	int i;
	for (i = 0; i < n; i++)
		cin >> a[i];
	int tsum = 0;
	for (i = 0; i < n; i++)
		tsum += a[i];
	int c = 0, sum = 0;
	sort(a, a + n);
	tsum = tsum / 2;
	while (sum <= tsum)
	{
		++c;
		sum += a[n - c];
	}
	cout << c;
	return 0;
}