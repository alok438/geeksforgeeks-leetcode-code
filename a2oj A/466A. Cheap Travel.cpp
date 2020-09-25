#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {

	int n, m, a, b;

	cin >> n >> m >> a >> b;
	if ( m * a <= b )//|| n % m == 0)
	{cout << n *a << "\n";}
	else
	{cout << (n / m) * b + min((n % m) * a, b) << "\n";}
	return 0;
}

//9 3 3 10
// 30      coret    27