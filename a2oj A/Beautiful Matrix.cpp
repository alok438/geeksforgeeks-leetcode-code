#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 5;
	int mat[n][n];
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> mat[i][j];

	int c1 = n / 2, c2 = n / 2;
	int C1 = 0, C2 = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (mat[i][j] == 1) {
				C1 = i;
				C2 = j;
				break;
			}
		}
	}
	cout << (abs(c1 - C1) + abs(c2 - C2));
}