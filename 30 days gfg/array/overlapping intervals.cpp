#include<bits/stdc++.h>
#define w(t)   int t;cin>>t;while(t--)
using namespace std;
vector<pair<int, int>> overlapping(vector<pair<int, int>>a, int n) {
	int i, j = 0;
	sort(a.begin(), a.end());
	for (i = 1; i < n; i++) {
		if (a[j].second >= a[i].first) {
			a[j].second = max(a[j].second, a[i].second);
		}
		else {
			j++;
			a[j].first = a[i].first;
			a[j].second = a[i].second;
		}
	}
	a.erase(a.begin() + j + 1, a.end());
	return a;

}
int main()
{
	w(t)
	{
		int n, i;
		cin >> n;
		vector<pair<int, int>>a, res;
		int x, y;
		for (i = 0; i < n; i++) {
			cin >> x >> y;
			a.push_back(make_pair(x, y));
		}
		res = overlapping(a, n);
		for (i = 0; i < res.size(); i++) {
			cout << res[i].first << " " << res[i].second << " ";

		}
		cout << '\n';
	}
}