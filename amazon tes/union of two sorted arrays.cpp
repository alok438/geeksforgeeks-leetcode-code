vector<int> findUnion(int a[], int b[], int n, int m)
{
	unordered_set< int> s;
	vector<int>res;
	int i, k = 0;
	for (i = 0; i < n; i++)
		c[k++] = a[i];
	for (i = 0; i < m; i++)
		c[k++] = b[i];
	unordered_map<int, int>m;
	for (i = 0; i < k; ++i)
		m[c[i++]];
	for (auto i : m) {
		if (i.second = 1)
			res.push_back(m[i]);
		return res;
	}
}