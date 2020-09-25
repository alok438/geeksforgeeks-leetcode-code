#include<bits/stdc++.h>
using namespace std;

int main()
{	int a, b, c;
	cin >> a >> b >> c;
	int m, n, g, h;
	m = max(a + b * c, a * (b + c));
	n = max(m, a * b * c);
	g = max(n, (a + b) * c);
	h = max(g, a + b + c);
	cout << h;
}