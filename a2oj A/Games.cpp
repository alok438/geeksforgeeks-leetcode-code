#include<bits/stdc++.h>
using namespace std;
int main( )
{
	int n;
	cin >> n;
	int i, j;
	int home[n], guest[n];
	for (i = 0; i < n; i++)
		cin >> home[i] >> guest[i];

	int c = 0;
	for (i = 0; i < n; i++) {
		cin >> home[i] >> guest[i];
		for (j = 0; j < n; j++)
			if (i != j && home[i] == guest[j])
				c++;
	}
	cout << c;

}