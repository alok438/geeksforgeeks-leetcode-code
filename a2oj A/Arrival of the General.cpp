#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int i, a[n];
	int maxm = 0, maxi;
	int minm = 101, mini;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxm) {
			maxm = a[i];
			maxi = i;
		}
		if (a[i] <= minm) {
			minm = a[i];
			mini = i;
		}
	}
	if (maxi > mini)
		mini++;
	cout <<  maxi + (n - 1) - mini;


}