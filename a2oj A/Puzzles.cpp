#include<bits/stdc++.h>
using namespace std;

int main()
{	int n, k;
	cin >> n >> k;
	int a[k];
	int i;
	for (i = 0; i < k; i++)
		cin >> a[i];
	sort(a, a + k);
	int m = INT_MAX;

	for (i = 0; i < k - n + 1; i++) {
		m = min(m, a[i + n - 1] - a[i]);
	}

	cout << m;
}