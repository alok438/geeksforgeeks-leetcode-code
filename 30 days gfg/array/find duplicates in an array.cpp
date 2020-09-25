vector<int> duplicates(int a[], int n) {
	int i, f = 0;
	map<int, int>m;
	vector<int> res;
	for (i = 0; i < n; i++)
		m[a[i]]++;
	auto(i: m)
	if (i.second > 1) {
		res.push_back(a[i]);
		f = 1;
	}
	if (f == 0) res.push_back(-1);
	return res;
}