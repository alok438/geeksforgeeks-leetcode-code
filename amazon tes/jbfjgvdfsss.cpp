#include <bits/stdc++.h>
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray);
vector<int> SortBinaryArray(vector<int> a)
{
	int n = a.size();
	int i;
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

	return a;
	a.clear();

}



// { Driver Code Starts.

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> binArray(n);

		for (int i = 0; i  < n; i++)
			cin >> binArray[i];

		vector<int> result = SortBinaryArray(binArray);
		for (int i = 0; i < n; i++)
			cout << result[i] << " ";

		cout << endl;
	}
	return 0;
}